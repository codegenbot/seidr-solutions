#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = a.convert_to<int>();
        string y = b.convert_to<string>();
        if (x > stoi(y))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = a.convert_to<float>();
        int y = b.convert_to<int>();
        if (x > y)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = a.convert_to<string>();
        float y = b.convert_to<float>();
        if (stof(x) > y)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = a.convert_to<string>();
        string y = b.convert_to<string>();
        if (stof(x) > stof(y))
            return a;
        else if (stof(x) < stof(y))
            return b;
        else
            return boost::any("None");
    }
    else {
        // If all values are equal, return "None"
        return boost::any("None");
    }
}

int main() {
    cout << compare_one(1, 2.5) << endl;  // Output: 2.5
    cout << compare_one(1, "2,3") << endl;  // Output: 2,3
    cout << compare_one("5,1", "6") << endl;  // Output: 6
    cout << compare_one("1", 1) << endl;  // Output: None
    return 0;
}