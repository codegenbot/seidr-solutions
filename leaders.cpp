#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    if (n == 0) return result; // handle empty input
    
    int rightmost = nums[n-1];
    for (int i = n-2; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            rightmost = nums[i];
            result.push_back(rightmost);
        }
    }
    
    return result;
}