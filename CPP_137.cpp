#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (float)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = boost::lexical_cast<int>(boost::any_cast<string>(a));
        string b_str = boost::any_cast<string>(b);
        return a_int > boost::lexical_cast<int>(b_str) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        string b_str = boost::any_cast<string>(b);
        return boost::lexical_cast<int>(b_str) > a_int ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float a_float = boost::lexical_cast<float>(boost::any_cast<string>(a));
        string b_str = boost::any_cast<string>(b);
        return a_float > boost::lexical_cast<float>(b_str) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float a_float = boost::lexical_cast<float>(boost::any_cast<string>(a));
        return a_float > boost::lexical_cast<float>(boost::any_cast<string>(b)) ? a : b;
    }

    return boost::any("None");
}