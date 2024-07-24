#include <string>
#include <typeinfo>
#include <boost/any.hpp>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        int num = stoi(str.substr(0, pos));
        return (int)a > num ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t posA = any_cast<string>(a).find(',');
        size_t posB = any_cast<string>(b).find(',');
        int numA = stoi(any_cast<string>(a).substr(0, posA));
        int numB = stoi(any_cast<string>(b).substr(0, posB));
        return numA > numB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        size_t pos = any_cast<string>(a).find(',');
        int num = (int)b;
        string str = any_cast<string>(a);
        size_t pos2 = str.find(',');
        return stoi(str.substr(0, pos2)) > num ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        int num = (int)b;
        string str = any_cast<string>(a);
        size_t pos = str.find(',');
        return (float)a > stoi(str.substr(0, pos)) ? a : b;
    }
    else {
        return boost::any("None");
    }
}