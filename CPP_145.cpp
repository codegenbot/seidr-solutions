#include <algorithm>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    
    // Calculate the sum of digits for each number
    while (a != 0) {
        sumA += abs(a % 10);
        a /= 10;
    }
    while (b != 0) {
        sumB += abs(b % 10);
        b /= 10;
    }
    
    // If the sums are equal, order based on index
    if (sumA == sumB) {
        return a < b;
    }
    
    // Otherwise, order based on sum of digits
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    // Sort the vector using the compare function
    sort(nums.begin(), nums.end(), compare);
    
    return nums;
}