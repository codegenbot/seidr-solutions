#include <boost/any.hpp>  // Replace the incorrect path with the correct path to the boost/any.hpp file.

using namespace std;

template<typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}