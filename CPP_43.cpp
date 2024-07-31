#include <vector>
#include <unordered_set>
#include <cassert> // Add this include statement

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> seen;
    for (int num : l) {
        if (seen.find(-num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    return 0;
}