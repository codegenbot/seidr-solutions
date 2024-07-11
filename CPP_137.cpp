#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

boost::any compare(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) {
            return a;
        } else if (stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b))) {
            return b;
        }
    }
    assert(false); // Error if types are not int, float, or string
}

int main() {
    boost::any a = 10;
    boost::any b = 20;
    cout << boost::any_cast<int>(compare(a, b)) << endl;

    return 0;
}