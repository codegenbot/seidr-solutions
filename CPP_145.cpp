```cpp
#include <initializer_list>
#include <algorithm>
#include <vector>

#include <pmr/vector>
#include <utility>

using namespace std;

bool issame(vector<int> a, vector<int> b) = delete;
vector<int> order_by_points(vector<int, pmr::memory_resource> nums);

bool issame(std::pmr::vector<int> a, std::pmr::vector<int> b) {
    return a == b;
}

std::pmr::vector<int> order_by_points(std::pmr::vector<int, std::pmr::memory_resource> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num != 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}) , {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}