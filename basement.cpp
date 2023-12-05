#include <vector>
#include <iostream>
using namespace std;
int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
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
