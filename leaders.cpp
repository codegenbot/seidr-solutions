#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    std::vector<int> result;
    int lastMax = vec.back();
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= lastMax) {
            result.push_back(vec[i]);
            lastMax = vec[i];
        }
    }
    return result;
}