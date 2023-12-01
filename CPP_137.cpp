#include <boost/any.hpp>
#include <cassert>
#include <iostream>
#include <string>

using namespace std;
using boost::any_cast;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        }
    }
    return boost::any("None");
}

int main() {
    assert(any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    assert(any_cast<string>(compare_one(1, 2)) == "2");
    assert(any_cast<string>(compare_one(1.5f, 1.2f)) == "1.5");
    cout << "All tests passed!" << endl;
    return 0;
}