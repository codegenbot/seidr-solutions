#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int result = -1;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            result = i;
            break;
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-1,-2,3};
    int result = basement(nums);
    cout << "The first index with a negative sum is: " << result << endl;
    return 0;
}