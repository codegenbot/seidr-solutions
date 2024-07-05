#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i;
    }
    return -1;

}

int main() {
    vector<int> nums = {-2, 3, 1,-5,4};
    int result = basement(nums);
    cout << "Result: " << result << endl; 
    return 0;
}