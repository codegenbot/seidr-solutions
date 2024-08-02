#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a, b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a, b);
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return (str_b > str_a) ? b : ((str_a == str_b) ? "None" : a);
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
             (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string str_b = boost::any_cast<string>(b);
        float num_a = boost::lexical_cast<float>(boost::any_cast<boost::any>(a));
        return (str_b > to_string(num_a)) ? b : ((num_a == boost::lexical_cast<float>(str_b)) ? "None" : a);
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str_a = boost::any_cast<string>(a);
        float num_b = boost::lexical_cast<float>(boost::any_cast<boost::any>(b));
        return (str_a > to_string(num_b)) ? a : ((num_b == boost::lexical_cast<float>(str_a)) ? "None" : b);
    }
    else {
        throw invalid_argument("Invalid input types");
    }
}