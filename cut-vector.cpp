```cpp
#include <vector>
#include <limits>

using namespace std;

int INT_MAX = numeric_limits<int>::max();

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 1; i < n; i++) {
        int diff1 = abs(nums[i] - nums[0]);
        int diff2 = abs(nums[n-1] - nums[i-1]);
        
        if (diff1 <= diff2) {
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            vector<int> firstPart(nums.begin(), nums.begin() + i);
            nums.erase(nums.begin(), nums.begin() + i);
            result.push_back(firstPart);
            break;
        } else {
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin(), nums.begin() + i);
        }
    }
    
    if (!nums.empty()) {
        result.push_back(nums);
    }

    return result;
}