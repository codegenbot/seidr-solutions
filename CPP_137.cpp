#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        int n1 = stoi(str1.substr(0, str1.find(',')));
        int n2 = stoi(str2.substr(0, str2.find(',')));
        if (n1 > n2) return a;
        else if (n1 < n2) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = a.convert_to<string>();
        int n = stoi(str.substr(0, str.find(',')));
        if (b.convert_to<int>() > n) return a;
        else if (b.convert_to<int>() < n) return b;
        else return boost::any("None");
    }
    else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();
        int n = stoi(str.substr(0, str.find(',')));
        if (a.convert_to<int>() > n) return a;
        else if (a.convert_to<int>() < n) return b;
        else return boost::any("None");
    }
    else {
        if (a.convert_to<int>() > b.convert_to<int>()) return a;
        else if (a.convert_to<int>() < b.convert_to<int>()) return b;
        else return boost::any("None");
    }
}