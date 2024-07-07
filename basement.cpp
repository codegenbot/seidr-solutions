```
#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() { 
    cout << findFirstNegativeIndex({-1,2,-3,4,-5,6}) << endl; 
    return 0; 
}