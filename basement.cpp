#include <vector>
using namespace std;

int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1; // Return the index where sum first becomes negative (inclusive)
        }
    }
    return nums.size();
}

int main() {
    // Test your basement function here
    return 0;
}