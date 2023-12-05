```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int basement(const vector<int>& nums) {
    if (std::all_of(nums.begin(), nums.end(), [](int x){ return x > 0; })) {
        return -1;
    }
    int sum = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        sum += *it;
        if (sum < 0) {
            return std::distance(nums.begin(), it);
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int index = basement(nums);
    if (index == -1) {
        cout << "No negative sum found." << endl;
    } else {
        cout << "First index with negative sum: " << index << endl;
    }
    return 0;
}
```