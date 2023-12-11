```
#include <iostream>
#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                return result;
            }
        }
    }
    return result;
}
int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::cout << "The two elements that sum to " << target << " are: ";
    std::vector<int> result = findPair(nums, target);
    for (auto it : result) {
        std::cout << it << " ";
    }
    return 0;
}
```
