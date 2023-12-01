#include <algorithm>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    
    // Calculate sum of digits for a
    int tempA = abs(a);
    while (tempA > 0) {
        sumA += tempA % 10;
        tempA /= 10;
    }
    
    // Calculate sum of digits for b
    int tempB = abs(b);
    while (tempB > 0) {
        sumB += tempB % 10;
        tempB /= 10;
    }
    
    // If sums are equal, order based on index
    if (sumA == sumB) {
        return a < b;
    }
    
    // Otherwise, order based on sum of digits
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}