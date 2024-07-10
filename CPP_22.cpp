#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

bool issame(const boost::any& value, const std::type_info& type) {
    return value.type() == type;
}

std::vector<int> filter_integers(std::list<boost::any> values);

int main() {
    std::list<boost::any> values = {10, 20, 30, "hello", 40};
    std::vector<int> result = filter_integers(values);
    
    for (const auto& num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(const auto& val : values){
        if(issame(val, typeid(int))){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}