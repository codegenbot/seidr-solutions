#include <vector>
#include <iostream>

using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    int i = -1;
    for (int j = 0; j < nums.size(); j++) {
        sum += nums[j];
        if (sum < 0)
            return j;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, -2, 3, -4}; 
    int result = basement(nums);
    if (result != -1) {
        cout << "Basement found at index " << result << std::endl;
    } else {
        cout << "No negative sum found." << std::endl;
    }
    return 0;