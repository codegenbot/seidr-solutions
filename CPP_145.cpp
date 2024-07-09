#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [&] (int a, int b) {
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