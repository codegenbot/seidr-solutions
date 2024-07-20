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
    std::list<boost::any> values;
    values.push_back(10);
    values.push_back(20.5);
    values.push_back(30);
    values.push_back("hello");

    std::vector<int> filtered_values = filter_integers(values);

    for (const auto &val : filtered_values) {
        std::cout << val << " ";
    }

    return 0;
}