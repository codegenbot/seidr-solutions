#include <vector>
using namespace std;

int basement(const vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
}