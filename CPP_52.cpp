#include <cassert>
#include <vector>

bool below_threshold(const std::vector<int>& nums, int threshold) {
    for (int num : nums) {
        if (num >= threshold) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    return 0;
}