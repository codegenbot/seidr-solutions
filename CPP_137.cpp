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
    assert(boost::any_cast<int>(compare_one(boost::any(1), boost::any(2))) == 2);
    assert(boost::any_cast<float>(compare_one(boost::any(1.5f), boost::any(3.2f))) == 3.2f);
    assert(boost::any_cast<string>(compare_one(boost::any(string("hello")), boost::any(string("world")))) == "world");

    return 0;
}