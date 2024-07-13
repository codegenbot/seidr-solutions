#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {2, -3, 4};
    int index = basement(nums);
    if(index != -1) cout << "The basement is at index: " << index << endl;
    else cout << "No negative sum found" << endl;
    return 0;
}