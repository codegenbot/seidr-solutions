#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& nums) {
    int sum = 0;
    int index = 0;
    
    for (; index < nums.size() && sum >= 0; ++index) {
        sum += nums[index];
    }
    
    return (sum < 0 ? index - 1 : -1);
}