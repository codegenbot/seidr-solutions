#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        auto getDigitSum = [](int num) {
            int sum = 0;
            num = abs(num);
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            return sum;
        };
        int sumA = getDigitSum(a);
        int sumB = getDigitSum(b);
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });

    return nums;
}