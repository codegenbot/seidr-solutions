#include <vector>
using namespace std;

vector<int> leaders(vector<int> nums) {
    int rightmost = nums.back();
    vector<int> result;
    
    for (int i = static_cast<int>(nums.size()) - 2; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            rightmost = nums[i];
            result.push_back(rightmost);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}