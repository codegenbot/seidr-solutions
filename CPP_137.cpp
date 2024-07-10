#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<std::string>(a)) {
        if (is_any_of<std::string>(b)) {
            return (get<std::string>(a) == get<std::string>(b)) ? any("") : max(a, b);
        } else {
            return max(a, boost::any(get<double>(b)));
        }
    } else {
        if (is_any_of<std::string>(b)) {
            return max(boost::any(get<double>(a)), b);
        } else {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) == get<double>(b))) ? any("") : b;
        }
    }
}

int main() {
    boost::any a = "Hello";
    boost::any b = 5.0;
    boost::any result = compare_one(a, b);
    
    if (is_any_of<std::string>(result)) {
        std::cout << get<std::string>(result) << std::endl;
    } else {
        double value = get<double>(result);
        std::cout << value << std::endl;
    }
    
    return 0;
}