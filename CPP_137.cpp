#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
T max_value(const boost::any& a, const boost::any& b) {
    assert(a.type() == b.type());

    if (a.empty() || b.empty()) {
        return T();
    }

    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
        return boost::any_cast<T>(a);
    } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
        return boost::any_cast<T>(b);
    } else {
        return T();
    }
}

int main() {
    boost::any a = 5;
    boost::any b = 10;
    cout << max_value<int>(a, b) << endl;

    boost::any c = 3.14f;
    boost::any d = 2.71f;
    cout << max_value<float>(c, d) << endl;

    boost::any e = string("hello");
    boost::any f = string("world");
    cout << max_value<string>(e, f) << endl;

    return 0;
}