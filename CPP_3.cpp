#include <cassert>
#include <vector>

bool below_zero(const std::vector<int>& nums) {
    for (int num : nums) {
        if (num < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    return 0;
}