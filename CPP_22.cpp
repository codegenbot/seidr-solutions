#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Test the filter_integers function
    std::list<boost::any> values = {1, 2, "hello", 3.14, 4};
    std::vector<int> filtered = filter_integers(values);
    for (const auto &num : filtered) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Test the issame function
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    std::cout << issame(vec1, vec2) << std::endl;

    return 0;
}