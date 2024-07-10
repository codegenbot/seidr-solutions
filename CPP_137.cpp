#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : (b == boost::any(b.get<int>())) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        int numA = stoi(strA);
        return numA > (int)strtol(strB.c_str(), NULL, 10) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        float numA = stof(strA);
        return numA > (float)b ? a : (boost::any_cast<float>(b) == b.get<float>()) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strB > strA ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int numA = boost::any_cast<int>(a);
        int numB = boost::any_cast<int>(b);
        return (numA > numB) ? a : ((int)b == b.get<int>()) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float numA = boost::any_cast<float>(a);
        float numB = boost::any_cast<float>(b);
        return (numA > numB) ? a : ((float)b == b.get<float>()) ? boost::any("None") : b;
    }
    else
        return boost::any("None");
}