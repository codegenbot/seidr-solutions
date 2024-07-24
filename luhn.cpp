#include <vector>
using namespace std;

int luhn(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if ((i % 2 == 1)) {
            int doubleDigit = nums[i] * 2;
            if (doubleDigit > 9) {
                sum += doubleDigit - 9;
            } else {
                sum += doubleDigit;
            }
        } else {
            sum += nums[i];
        }
    }
    return sum;
}