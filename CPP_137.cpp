#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

template<typename T>
boost::any compare_one(const T& a, const T& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return a;
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}

int main() {
    assert(boost::any_cast<string>(compare_one(boost::any(string("1")), boost::any(string("2")))) == "None");
    // Add more test cases here

    return 0;
}