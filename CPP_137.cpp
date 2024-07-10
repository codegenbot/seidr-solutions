#include <iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi(string(boost::any_cast<int>(a))) > stoi(remove(string(boost::any_cast<string>(b)), ',')))
            return a;
        else if (stoi(string(boost::any_cast<int>(a))) < stoi(remove(string(boost::any_cast<string>(b)), ',')))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stoi(remove(string(boost::any_cast<string>(a)), ',')) > boost::any_cast<int>(b))
            return a;
        else if (stoi(remove(string(boost::any_cast<string>(a)), ',')) < boost::any_cast<int>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(remove(string(boost::any_cast<string>(a)), ',')) > boost::any_cast<float>(b))
            return a;
        else if (stod(remove(string(boost::any_cast<string>(a)), ',')) < boost::any_cast<float>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<float>(a) > stod(remove(string(boost::any_cast<string>(b)), ',')))
            return a;
        else if (boost::any_cast<float>(a) < stod(remove(string(boost::any_cast<string>(b)), ',')))
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}

string remove(const string& str, char c) {
    string result = "";
    for (char ch : str) {
        if (ch != c)
            result += ch;
    }
    return result;
}