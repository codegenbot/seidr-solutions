#include <iostream>
#include<string>
#include<boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<float>(a) && is_any_of<float>(b)) {
        return max(get<float>(a), get<float>(b));
    }
    else if (is_any_of<string>(a) && is_any_of<string>(b)) {
        return max(a, b);
    } 
    else if (is_any_of<float>(a) && is_any_of<string>(b)) {
        return (get<float>(a) > stod(string(get<string>(b)).erase(0,1).erase(-2))) ? a : b;
    }
    else if (is_any_of<string>(a) && is_any_of<float>(b)) {
        return (stod(string(a).erase(0,1).erase(-2)) > get<float>(b)) ? a : b;
    }
    else {
        return "None";
    }
}