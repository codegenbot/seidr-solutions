#include <vector>
using namespace std;

int luhn(vector<int>& nums) {
    int sum = 0;
    bool alternate = false;
    for (int i = nums.size() - 1; i >= 0; --i) {
        int n = nums[i];
        if (alternate) {
            n *= 2;
            if (n > 9) {
                n -= 9;
            }
        }
        sum += n;
        alternate = !alternate;
    }
    return sum;
}