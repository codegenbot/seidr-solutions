#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
T compare(const boost::any& a, const boost::any& b) {
    assert(a.type() == typeid(T) && b.type() == typeid(T));

    if (boost::any_cast<T>(a) > boost::any_cast<T>(b))
        return boost::any_cast<T>(a);
    else if (boost::any_cast<T>(a) < boost::any_cast<T>(b))
        return boost::any_cast<T>(b);
    else
        return T();
}

int main() {
    boost::any a = 5;
    boost::any b = 10;

    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        cout << compare<int>(a, b) << endl;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        cout << compare<float>(a, b) << endl;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        cout << compare<string>(a, b) << endl;
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        cout << compare<string>(a, b) << endl;
    }
    else {
        cout << "None" << endl;
    }

    return 0;
}