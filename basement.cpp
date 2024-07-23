#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
}

int main() {
    vector<int> nums = {1, -2, 3, 4};
    cout << basementIndex(nums) << endl;
    return 0;
}