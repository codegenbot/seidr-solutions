#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

double convertToDouble(const string &s) {
    string temp = s;
    replace(temp.begin(), temp.end(), ',', '.');
    return stod(temp);
}

boost::any compare_one(boost::any a, boost::any b) {
    double valA, valB;
    string strA, strB;

    if (a.type() == typeid(int))
        valA = boost::any_cast<int>(a);
    else if (a.type() == typeid(float))
        valA = boost::any_cast<float>(a);
    else if (a.type() == typeid(string))
        valA = convertToDouble(boost::any_cast<string>(a));
    
    if (b.type() == typeid(int))
        valB = boost::any_cast<int>(b);
    else if (b.type() == typeid(float))
        valB = boost::any_cast<float>(b);
    else if (b.type() == typeid(string))
        valB = convertToDouble(boost::any_cast<string>(b));

    if (valA > valB)
        return a;
    else if (valB > valA)
        return b;
    else
        return string("None");
}