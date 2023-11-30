#include <algorithm>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    
    // Calculate the sum of digits for a
    int tempA = abs(a);
    while (tempA > 0) {
        sumA += tempA % 10;
        tempA /= 10;
    }
    
    // Calculate the sum of digits for b
    int tempB = abs(b);
    while (tempB > 0) {
        sumB += tempB % 10;
        tempB /= 10;
    }
    
    // If the sums are equal, sort based on index
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    // Sort the vector using the compare function
    sort(nums.begin(), nums.end(), compare);
    
    return nums;
}