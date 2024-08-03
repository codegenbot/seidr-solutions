#include <iostream>
#include <vector>

using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {-5, 1, -3, 4, -2};
    cout << "The basement index is: " << basementIndex(nums) << endl;
    return 0;
}