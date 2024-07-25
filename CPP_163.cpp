#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>

class Solution {
public:
    static std::vector<int> generate_integers(int start, int end) {
        std::vector<int> nums(end - start + 1);
        std::iota(nums.begin(), nums.end(), start);
        return nums;
    }

    static std::vector<int> filter_even_numbers(const std::vector<int> &nums) {
        std::vector<int> result;
        std::copy_if(nums.begin(), nums.end(), std::back_inserter(result), [](int num) { return num % 2 == 0; });
        return result;
    }

    static bool is_same(const std::vector<int> &a, const std::vector<int> &b) {
        return a == b;
    }
};

int main() {
    assert(Solution::is_same(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89))));
    return 0;
}