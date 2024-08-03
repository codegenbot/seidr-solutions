#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    int i = -1; // initialize i to -1
    for (i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return i; // return -1 if no such index is found
}

int main() {
    vector<int> nums = {2,3,-2,4};
    int result = basementIndex(nums);
    cout << "Basement index: " << result << endl;
    return 0;
}