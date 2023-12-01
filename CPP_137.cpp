#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

template<typename T>
T compare_one(T a, T b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return T();
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return compare_one(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return compare_one(boost::any_cast<float>(a), boost::any_cast<float>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return compare_one(boost::any_cast<string>(a), boost::any_cast<string>(b));
    }
    return nullptr;
}

int main() {
    // Example usage
    int intResult = boost::any_cast<int>(compare_one(boost::any(5), boost::any(10)));
    cout << "intResult: " << intResult << endl;

    float floatResult = boost::any_cast<float>(compare_one(boost::any(3.14), boost::any(2.5)));
    cout << "floatResult: " << floatResult << endl;

    string stringResult = boost::any_cast<string>(compare_one(boost::any("hello"), boost::any("world")));
    cout << "stringResult: " << stringResult << endl;

    return 0;
}