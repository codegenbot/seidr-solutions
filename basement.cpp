#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Your test cases here
    vector<int> nums1 = {-1};
    cout << basement(nums1) << endl;

    vector<int> nums2 = {1, -100};
    cout << basement(nums2) << endl;

    vector<int> nums3 = {2, -1, 100};
    cout << basement(nums3) << endl;

    vector<int> nums4 = {2, -95, 100};
    cout << basement(nums4) << endl;

    vector<int> nums5 = {2, -30, 5};
    cout << basement(nums5) << endl;
    
    return 0;
}