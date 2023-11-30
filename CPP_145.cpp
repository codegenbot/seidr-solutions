#include <algorithm>
#include <vector>

bool compare(int a, int b) {
    int sumA = 0;
    int sumB = 0;
    
    // Calculate the sum of digits for both numbers
    while (a != 0) {
        sumA += abs(a % 10);
        a /= 10;
    }
    
    while (b != 0) {
        sumB += abs(b % 10);
        b /= 10;
    }
    
    // If the sums are equal, sort based on index
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}