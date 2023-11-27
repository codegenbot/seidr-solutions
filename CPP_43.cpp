#include <vector>
#include <cassert>

bool pairs_sum_to_zero(vector<int> l) {
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
    // Test your code here
    vector<int> nums = {1, -2, 3, -4, 5};
    assert(pairs_sum_to_zero(nums));

    return 0;
}