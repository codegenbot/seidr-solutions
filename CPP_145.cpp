#include <vector>
#include <algorithm>

bool compare(int a, int b) {
    int sum_a = 0, sum_b = 0;
    // Calculate the sum of digits for a
    while (a != 0) {
        sum_a += abs(a % 10);
        a /= 10;
    }
    // Calculate the sum of digits for b
    while (b != 0) {
        sum_b += abs(b % 10);
        b /= 10;
    }
    // If sums are equal, order based on index
    if (sum_a == sum_b) {
        return a < b;
    }
    // Otherwise, order based on sum of digits
    return sum_a < sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    // Sort the vector using the compare function
    sort(nums.begin(), nums.end(), compare);
    return nums;
}