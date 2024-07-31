#include <vector>
#include <algorithm>

template <typename T>
std::vector<T> remove_duplicates(const std::vector<T>& vec) {
    std::vector<T> result = vec;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}