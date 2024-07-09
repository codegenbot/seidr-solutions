#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [&] (int a, int int b) {
        if (getSumOfDigits(a) == getSumOfDigits(b)) {
            return a > b;
        }
        return getSumOfDigits(a) < getSumOfDigits(b);
    });
    
    return nums;
}

int getSumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}