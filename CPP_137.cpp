#include <string>
#include <boost/any.hpp>

using namespace boost;

template<typename T>
boost::any compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return boost::any(); // indicates equality
    }
}