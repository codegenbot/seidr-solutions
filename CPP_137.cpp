#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);
        return strA.compare(to_string(numB)) > 0 ? a : (numB > stoi(strA) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float numA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        return stof(strB) > numA ? b : (stof(strB) == numA ? boost::any("None") : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);
        return strA.compare(to_string(numB)) > 0 ? a : (stoi(strA) > numB ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        float numB = boost::any_cast<float>(b);
        return stof(strA) > numB ? a : (stof(strA) == numB ? boost::any("None") : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strA.compare(strB) > 0 ? a : (strA == strB ? boost::any("None") : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int numA = boost::any_cast<int>(a);
        int numB = boost::any_cast<int>(b);
        return numA > numB ? a : (numA == numB ? boost::any("None") : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float numA = boost::any_cast<float>(a);
        float numB = boost::any_cast<float>(b);
        return numA > numB ? a : (numA == numB ? boost::any("None") : b);
    }
    else {
        return "None";
    }
}