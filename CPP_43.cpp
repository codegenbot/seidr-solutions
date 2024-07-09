#include <vector>
#include <assert.h>

bool pairs_sum_to_zero(const std::vector<std::pair<int, int>>& pairs) {
    for (const auto& pair : pairs) {
        if (pair.first + pair.second == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero(std::vector<std::pair<int, int>>({{-3, 9}, {-1, 4}, {-2, 2}, {31, -31}})));
    // Add more test cases as needed
    return 0;
}