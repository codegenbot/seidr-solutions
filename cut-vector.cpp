#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> res1, res2;
    
    for(int i = 0; i < n - 1; i++) {
        if(nums[i] == nums[i+1]) {
            res1 = vector<int>(nums.begin(), nums.begin() + i + 1);
            res2 = vector<int>(nums.begin() + i + 1, nums.end());
            return {res1, res2};
        }
    }
    
    int minDiff = INT_MAX;
    int pos = -1;
    for(int i = 0; i < n - 1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    res1 = vector<int>(nums.begin(), nums.begin() + pos + 1);
    res2 = vector<int>(nums.begin() + pos + 1, nums.end());
    return {res1, res2};
}

int main() {
    // Your test code here
    return 0;
}