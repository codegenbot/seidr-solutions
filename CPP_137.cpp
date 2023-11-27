#include <string>
#include <boost/any.hpp>

using namespace std;

template<typename T>
T compare_one(const T& a, const T& b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
        return a;
    } else {
        return b;
    }
}