```cpp
#include <vector>
#include <climits>
using namespace std;

int main() {
    cutVector({1,2,3,4,5});
    return 0;
}

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    if(n == 1){
        return {{nums[0]}};
    }

    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = accumulate(nums.begin(), nums.begin() + i, 0) - nums[0];
        int diff2 = nums[n-1] - accumulate(nums.begin() + i, nums.end(), 0);
        if (abs(diff1-diff2) < abs(min_diff)) {
            min_diff = diff1 - diff2;
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            vector<int> temp(nums.begin() + i, nums.end());
            temp.erase(temp.begin());
            result.push_back(temp);
        }
    }
    
    return result;
}