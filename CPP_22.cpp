#include <vector>
#include <list>
#include <boost/any.hpp>
#include <algorithm>

bool issame(const boost::any& a1, const boost::any& a2) {
    return boost::any_cast<bool>(a1) == boost::any_cast<bool>(a2);
}

std::vector<boost::any> filter_integers(std::list<boost::any>& values){
    std::vector<boost::any> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).second == 0) { // Check if the value is an integer
            bool is_integer = boost::any_cast<bool>(value);
            if(is_integer) {
                result.push_back(value); // Add the integer to the result vector
            }
        }
    }
    return result;
}