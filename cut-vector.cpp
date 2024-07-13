#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    if (n == 0)
        return {{}, {}};
    
    int left = 0, right = n - 1;
    while (left < right && nums[left] != nums[right]) {
        if (nums[left + 1] > nums[right - 1])
            right--;
        else
            left++;
    }
    
    result.push_back(vector<int>(nums.begin(), nums.begin() + left));
    result.push_back({nums.begin() + left, nums.end()});
    return result;
}