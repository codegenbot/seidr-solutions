#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (boost::any_cast<float>(a) > stof(str)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(*boost::any_cast<string>(a)) > stof(*boost::any_cast<string>(b))) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return ((int)a.convertible_to<int>()) > stof(str) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > (int)b.convertible_to<int>()) ? a : b;
    }
    else {
        return boost::any("None");
    }
}

int main() {
    cout << "Result: " << compare_one(1, 2.5) << endl;
    cout << "Result: " << compare_one(1, "2,3") << endl;
    cout << "Result: " << compare_one("5,1", "6") << endl;
    cout << "Result: " << compare_one("1", 1) << endl;
    return 0;
}