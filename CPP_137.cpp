#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

// Define the type of the return value according to the function signature
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
    assert(false);  // Unreachable code if types are not handled correctly
}

// Example usage:
int main() {
    boost::any result = compare(5, 10);
    if (result.type() == typeid(int)) {
        cout << boost::any_cast<int>(result) << endl;
    } else if (result.type() == typeid(float)) {
        cout << boost::any_cast<float>(result) << endl;
    } else if (result.type() == typeid(string)) {
        cout << boost::any_cast<string>(result) << endl;
    }

    return 0;
}