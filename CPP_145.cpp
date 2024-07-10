#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [&] (int a, int b) {
        if (getDigitSum(a) == getDigitSum(b)) {
            return nums.size() - 1 - distance(nums.begin(), find(nums.begin(), nums.end(), a)) <
                   distance(nums.begin(), find(nums.begin(), nums.end(), b));
        }
        return getDigitSum(a) < getDigitSum(b);
    });
    
    return nums;
}

int getDigitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}