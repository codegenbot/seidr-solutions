#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

template <typename T1, typename T2>
boost::any compare(boost::any a, boost::any b) {
    assert(a.type() == typeid(T1) && b.type() == typeid(T2) || a.type() == typeid(T2) && b.type() == typeid(T1));

    if (boost::any_cast<T1>(a) > boost::any_cast<T2>(b)) {
        return a;
    } else if (boost::any_cast<T1>(a) < boost::any_cast<T2>(b)) {
        return b;
    } else {
        return "None";
    }
}

int main() {
    boost::any a = 5;
    boost::any b = 10;

    cout << boost::any_cast<int>(compare<int, int>(a, b)) << endl;

    return 0;
}