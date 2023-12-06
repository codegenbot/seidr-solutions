```c++
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

std::pair<int, int> find_pair(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 6;
    auto [i, j] = find_pair(nums, target);
    cout << "The two elements that sum to the target are: " << i << ", " << j << endl;
}
```