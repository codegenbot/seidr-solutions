#include <vector>
#include <iostream>

using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    int minIndex = -1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && minIndex == -1)
            minIndex = i;
    }
    return minIndex;
}

int main() {
    vector<int> nums = {-2, 3, 0, -5, 4};
    int result = basement(nums);
    cout << "Result: " << result << endl;
    return 0;
}