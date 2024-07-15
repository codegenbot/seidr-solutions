#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}