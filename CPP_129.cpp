#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<int> b) {
    std::vector<int> flattened_a;
    for (const auto &inner_vec : a) {
        flattened_a.insert(flattened_a.end(), inner_vec.begin(), inner_vec.end());
    }
    return flattened_a == b;
}