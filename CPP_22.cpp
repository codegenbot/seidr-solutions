#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(const boost::any& a, const boost::any& b) {
    return a.type() == b.type();
}

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {10, 15.5, "hello", 20, 25.5};
    std::vector<int> filtered_integers = filter_integers(values);

    for (const auto& num : filtered_integers) {
        std::cout << num << " ";
    }

    return 0;
}