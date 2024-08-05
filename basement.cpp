#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int result = -1;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0) {
                result = j;
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-3,2,-1,4,5};
    int result = basement(nums);
    cout << "The first index with a negative sum is: " << result << endl;
    return 0;
}