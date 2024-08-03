#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    int i = 0;
    while (i < nums.size()) {
        sum += nums[i];
        if (sum < 0) return i;
        i++;
    }
    return -1;
}

int main() {
    vector<int> nums = {-3,2,-2,4,1,-5};
    cout << "Basement index is: " << basementIndex(nums) << endl;
    return 0;
}