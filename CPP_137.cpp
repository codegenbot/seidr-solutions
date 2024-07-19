#include <iostream>
#include <boost/any.hpp>
#include <string>
#include <algorithm>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    // Existing code implementation here
}

} else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    std::string str_a = boost::any_cast<std::string>(a);
    std::string str_b = boost::any_cast<std::string>(b);
    if(str_a.find_first_of(".,") != std::string::npos || str_b.find_first_of(".,") != std::string::npos){
        std::replace(str_a.begin(), str_a.end(), ',', '.');
        std::replace(str_b.begin(), str_b.end(), ',', '.');
    }
    if(std::stod(str_a) > std::stod(str_b)){
        return a;
    } else if(std::stod(str_a) < std::stod(str_b)){
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}