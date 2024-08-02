```
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        if (b.type() == typeid(float))
            return max(a_int, boost::any_cast<float>(b));
        else if (b.type() == typeid(string)) {
            string b_str = boost::any_cast<string>(b);
            return (stoi(b_str) > a_int) ? b : (stoi(b_str) < a_int) ? a : boost::any("None");
        }
    } 
    else if (a.type() == typeid(float)) {
        float a_float = boost::any_cast<float>(a);
        if (b.type() == typeid(int))
            return max(a_float, boost::any_cast<int>(b));
        else if (b.type() == typeid(string)) {
            string b_str = boost::any_cast<string>(b);
            return (stof(b_str) > a_float) ? b : (stof(b_str) < a_float) ? a : boost::any("None");
        }
    } 
    else if (a.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        if (b.type() == typeid(int))
            return (stof(a_str) > boost::any_cast<int>(b)) ? a : (stof(a_str) < boost::any_cast<int>(b)) ? b : boost::any("None");
        else if (b.type() == typeid(float)) {
            float b_float = boost::any_cast<float>(b);
            return (stof(a_str) > b_float) ? a : (stof(a_str) < b_float) ? b : boost::any("None");
        }
    } 
    return boost::any("None");
}