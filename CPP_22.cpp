#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const boost::any& a, const boost::any& b) {
    return a.type() == b.type();
}

std::vector<int> filter_integers(std::list<boost::any> values);

int main() {
    std::list<boost::any> values = {10, 20, "hello", 30, 40};

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