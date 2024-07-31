#include <iostream>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values{1, 2, 3, "hello", 4, 5};
    
    std::vector<int> filtered_values = filter_integers(values);

    for (int val : filtered_values) {
        std::cout << val << " ";
    }
    
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};

    if (issame(a, b)) {
        std::cout << "\nThe vectors a and b are the same." << std::endl;
    } else {
        std::cout << "\nThe vectors a and b are different." << std::endl;
    }

    return 0;
}