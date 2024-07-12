#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <vector>

template<typename T1, typename T2>
bool issame(const boost::any& a, const boost::any& b) {
    return std::holds_alternative<T1>(a) && std::holds_alternative<T2>(b);
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {1, 2.0, 3, "hello", 4};
    auto integers = filter_integers(values);
    for (const auto& i : integers) {
        std::cout << i << std::endl;
    }
}