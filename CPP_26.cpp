#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    std::vector<int> remove_duplicates(const std::vector<int>& vec);

    std::vector<int> remove_duplicates(const std::vector<int>& vec) {
        std::vector<int> unique_vec = vec;
        std::sort(unique_vec.begin(), unique_vec.end());
        unique_vec.erase(std::unique(unique_vec.begin(), unique_vec.end()), unique_vec.end());
        return unique_vec;
    }

    bool issame(const std::vector<int>& a, const std::vector<int>& b);
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return std::remove_duplicates(a) == std::remove_duplicates(b);
    }
}

int main() {
    assert(std::issame(std::remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}