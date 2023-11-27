#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a == b) {
        return true;
    }
    return false;
}

int main() {
    std::list<boost::any> values;
    values.push_back(1);
    values.push_back("hello");
    values.push_back(2);
    values.push_back(3.14);
    values.push_back(4);

    std::vector<int> filtered_values = filter_integers(values);

    std::vector<int> expected_result = {1, 2, 4};

    if (issame(filtered_values, expected_result)) {
        std::cout << "Filtered values are correct!" << std::endl;
    }
    else {
        std::cout << "Filtered values are incorrect!" << std::endl;
    }

    return 0;
}