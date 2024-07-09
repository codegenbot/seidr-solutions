#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

template <typename T>
T compare(const boost::any& a, const boost::any& b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b))
            return boost::any_cast<T>(a);
        else if (boost::any_cast<T>(a) < boost::any_cast<T>(b))
            return boost::any_cast<T>(b);
        else
            return T();
    }
    else {
        return T();
    }
}

int main() {
    // Usage example
    boost::any a = 5, b = 10;
    int result = compare<int>(a, b);
    
    return 0;
}