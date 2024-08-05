#include <vector>
#include <cassert>
#include <algorithm>

template <typename T>
std::vector<T> generate_integers(T a, T b) {
    std::vector<T> result;
    for(T i = a; i <= b; i++){
        result.push_back(i);
    }
    return result;
}

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}