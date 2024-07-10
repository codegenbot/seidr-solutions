#include <vector>
#include <algorithm>

std::vector<int> sortVector(std::pmr::vector<int> vec) {
    std::vector<int> result;
    while (!vec.empty()) {
        int min_val = *std::min_element(vec.begin(), vec.end());
        result.push_back(min_val);
        vec.erase(std::remove(vec.begin(), vec.end(), min_val), vec.end());
        if (!vec.empty()) {
            int max_val = *std::max_element(vec.begin(), vec.end());
            result.push_back(max_val);
            vec.erase(std::remove(vec.begin(), vec.end(), max_val), vec.end());
        }
    }
    return result;
}