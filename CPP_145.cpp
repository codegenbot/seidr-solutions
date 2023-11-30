#include <vector>
#include <algorithm>

bool compareDigits(int num1, int num2) {
    int sum1 = 0, sum2 = 0;

    // Calculate the sum of digits of num1
    int temp1 = abs(num1);
    while (temp1 > 0) {
        sum1 += temp1 % 10;
        temp1 /= 10;
    }

    // Calculate the sum of digits of num2
    int temp2 = abs(num2);
    while (temp2 > 0) {
        sum2 += temp2 % 10;
        temp2 /= 10;
    }

    // If the sums are equal, order by index in original vector
    if (sum1 == sum2) {
        return num1 < num2;
    }

    return sum1 < sum2;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compareDigits);
    return nums;
}