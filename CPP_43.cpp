#include <vector>
#include <cassert>

bool pairs_sum_to_zero(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, -2, 3, -4, 5};
    bool hasPairSumZero = pairs_sum_to_zero(nums);
    assert(hasPairSumZero == true);

    return 0;
}