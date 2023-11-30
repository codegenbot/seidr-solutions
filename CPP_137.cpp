#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = any_cast<int>(a);
        int int_b = any_cast<int>(b);
        if (int_a == int_b) {
            return any();
        } else if (int_a > int_b) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = any_cast<float>(a);
        float float_b = any_cast<float>(b);
        if (float_a == float_b) {
            return any();
        } else if (float_a > float_b) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string string_a = any_cast<string>(a);
        string string_b = any_cast<string>(b);
        if (string_a == string_b) {
            return any();
        } else if (string_a > string_b) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_a = any_cast<int>(a);
        string string_b = any_cast<string>(b);
        if (int_a == stoi(string_b)) {
            return any();
        } else if (int_a > stoi(string_b)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string string_a = any_cast<string>(a);
        int int_b = any_cast<int>(b);
        if (stoi(string_a) == int_b) {
            return any();
        } else if (stoi(string_a) > int_b) {
            return a;
        } else {
            return b;
        }
    }
}

int main() {
    any result = compare_one(1, 2.5);
    cout << any_cast<float>(result) << endl;

    result = compare_one(1, string("2,3"));
    cout << any_cast<string>(result) << endl;

    result = compare_one(string("5,1"), string("6"));
    cout << any_cast<string>(result) << endl;

    result = compare_one(string("1"), 1);
    cout << any_cast<string>(result) << endl;
    
    return 0;
}