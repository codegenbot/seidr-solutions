#include <iostream>
#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

boost::any compare_one(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        float valA = stof(boost::any_cast<string>(a));
        float valB = stof(boost::any_cast<string>(b));
        if (valA > valB) {
            return a;
        } else if (valA < valB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
    
    return 0;
}