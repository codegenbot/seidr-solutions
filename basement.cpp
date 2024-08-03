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
    vector<int> nums = {-2, 3, 1, -5, 4};
    cout << "The basement index is: " << basementIndex(nums) << endl;
    return 0;
}