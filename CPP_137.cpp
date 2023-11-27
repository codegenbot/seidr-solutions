#include <algorithm>
#include <string>

using std::max;
using std::string;

template<typename T>
T compare_one(T a, T b) {
    return max(a, b);
}