#include <cassert>
#include <vector>

bool triples_sum_to_zero(const std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            for (int k = j + 1; k < nums.size(); ++k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    assert(triples_sum_to_zero({100, 3, 5, -100}) == false);
    assert(triples_sum_to_zero({-1, 0, 1}) == true);
    assert(triples_sum_to_zero({1, 2, 3, -6, 4, 5}) == true);
    assert(triples_sum_to_zero({1, 2, 3, 4, 5}) == false);
    
    return 0;
}