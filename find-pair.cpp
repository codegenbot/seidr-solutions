```
#include <vector>
using namespace std;
int find_pair(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return i, j;
            }
        }
    }
    return -1, -1;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 6;
    pair<int, int> result = find_pair(nums, target);
    cout << "The two elements that sum to " << target << " are: ";
    if (result.first != -1 && result.second != -1) {
        cout << nums[result.first] << " and " << nums[result.second];
    } else {
        cout << "No such pair found.";
    }
    return 0;
}
```