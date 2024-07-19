#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a < b ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a > b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.cast<string>() >= b.cast<string>()) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = b.cast<string>();
        int i = boost::any_cast<int>(a);
        if (i >= stoi(s)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = a.cast<string>();
        int i = boost::any_cast<int>(b);
        if (stoi(s) >= i) {
            return a;
        } else {
            return b;
        }
    } else {
        return typeid(any).name() == "class std::basic_string<char, std::char_traits<char>, std::allocator<char>>" ? any("None") : any("None");
    }
}