#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ) {
        sum += nums[i];
        if (sum < 0)
            return i;
        else if (i == nums.size() - 1)
            return -1;
        i++;
    }
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basementIndex(nums);
    cout << "The basement index is: " << result << endl;
    return 0;
}