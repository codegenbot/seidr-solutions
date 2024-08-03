#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<int> b) {
    std::vector<int> result;
    for (const auto& vec : a) {
        result.insert(result.end(), vec.begin(), vec.end());
    }
    return result == b;
}