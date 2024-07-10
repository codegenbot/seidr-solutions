#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

bool issame(const std::type_info& t1, const std::type_info& t2) {
    return t1 == t2;
}

std::vector<int> filter_integers(std::list<boost::any> values);

int main() {
    std::list<boost::any> values = {10, 20, 3.14, "hello", 30};

    std::vector<int> result = filter_integers(values);

    for (const auto& num : result) {
        std::cout << num << " ";
    }

    return 0;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}