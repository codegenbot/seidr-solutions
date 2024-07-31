#include <vector>
#include <cassert>
#include <climits>

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

int main() {
    std::vector<int> nums = {2, 5, 1, 7, 3};
    std::vector<int> expected_result = {2, 5, 5, 7, 7};
    assert(is_same(rolling_max(nums), expected_result));
    return 0;
}