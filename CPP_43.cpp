```cpp
#include <vector>

bool pairs_sum_to_zero(const std::vector<std::pair<int, int>>& pairs) {
    for (const auto& pair : pairs) {
        if (pair.first + pair.second == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<std::pair<int, int>> pairs = {{-3, 9}, {-1, 4}, {-2, 2}, {31, -31}};
    assert(pairs_sum_to_zero(pairs));
    return 0;
}