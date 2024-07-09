#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (stoi(y) > x) ? b : ((x > stoi(y)) ? a : any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return (stof(y) > x) ? b : ((x > stof(y)) ? a : any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (stoi(x) > y) ? a : ((y > stoi(x)) ? b : any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (stof(x) > y) ? a : ((y > stof(x)) ? b : any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stof(x) > stof(y)) ? a : ((stof(y) > stof(x)) ? b : any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : any("None"));
    } else {
        return "Invalid input";
    }
}