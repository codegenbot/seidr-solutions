#include <vector>
#include <cassert>
#include <climits>

namespace contest {
    std::vector<int> rolling_max(std::vector<int> numbers) {
        std::vector<int> result;
        int max_num = INT_MIN;
        for (int i = 0; i < numbers.size(); ++i) {
            max_num = std::max(max_num, numbers[i]);
            result.push_back(max_num);
        }
        return result;
    }

    bool is_same(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

int main() {
    std::vector<int> nums = {1, 3, 2, 5, 4};
    std::vector<int> expected_result = {1, 3, 3, 5, 5};
    std::vector<int> result = contest::rolling_max(nums);
    assert(contest::is_same(result, expected_result));
    return 0;
}