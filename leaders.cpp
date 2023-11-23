#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int max_right = nums.back();
    leaders.push_back(max_right);
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max_right) {
            max_right = nums[i];
            leaders.push_back(max_right);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}