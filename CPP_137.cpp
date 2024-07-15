#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) >= boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(a) >= boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(boost::any_cast<string>(a)) >= stof(boost::any_cast<string>(b))) ? a : b;
    }

    return a; // Handle other types, return the first argument by default
}

int main() {
    // Input from user
    int int1, int2;
    cin >> int1 >> int2;
    cout << boost::any_cast<int>(compare(int1, int2)) << endl;

    return 0;
}