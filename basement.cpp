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
    cout << findFirstNegativeIndex({-3, 2, 5, -4, 1}) << endl; 
    return 0; 
}