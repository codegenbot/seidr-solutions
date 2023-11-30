#include <algorithm>
#include <vector>

bool compare(int a, int b) {
    int sum_a = 0, sum_b = 0;
    
    // Calculate sum of digits for a
    int temp_a = abs(a);
    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }
    
    // Calculate sum of digits for b
    int temp_b = abs(b);
    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }
    
    // If sums are equal, order based on index
    if (sum_a == sum_b) {
        return a < b;
    }
    
    return sum_a < sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    // Sort the vector using the compare function
    sort(nums.begin(), nums.end(), compare);
    
    return nums;
}