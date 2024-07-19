#include <iostream>
#include <boost/any.hpp>
#include <string>
using namespace std;
using boost::any;

boost::any compare_one(boost::any a, boost::any b) {
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
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
            return a;
        } else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
            return b;
        }
    }
    return boost::any();
}

int main() {
    assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
    return 0;
}