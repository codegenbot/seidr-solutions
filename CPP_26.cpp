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

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return remove_duplicates(a) == remove_duplicates(b);
    }
}