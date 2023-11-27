#include <boost/any.hpp>
#include <string>

using namespace std;

template<typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}