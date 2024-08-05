#include <vector>
#include <algorithm>

template<typename T>
bool issame(std::vector<T> a, std::vector<T> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}