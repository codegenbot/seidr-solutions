```
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any((ai > bf) ? ai : bf);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        int b_int = boost::any_cast<int>(b);
        return (stoi(a_str) > b_int) ? a : (stoi(a_str) < b_int) ? b : boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float a_float = boost::any_cast<float>(a);
        string b_str = boost::any_cast<string>(b);
        return (stof(b_str) > a_float) ? b : (stof(b_str) < a_float) ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string a_str = boost::any_cast<string>(a);
        int b_int = boost::any_cast<int>(b);
        return (stof(a_str) > b_int) ? a : (stof(a_str) < b_int) ? b : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string a_str = boost::any_cast<string>(a);
        float b_float = boost::any_cast<float>(b);
        return (stof(a_str) > b_float) ? a : (stof(a_str) < b_float) ? b : boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float a_float = boost::any_cast<float>(a);
        int b_int = boost::any_cast<int>(b);
        return (a_float > b_int) ? a : (a_float < b_int) ? b : boost::any("None");
    } else {
        float a_float = boost::any_cast<float>(a);
        float b_float = boost::any_cast<float>(b);
        return (a_float > b_float) ? a : (a_float < b_float) ? b : boost::any("None");
    }
}