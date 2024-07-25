#include <vector>
#include <algorithm>

int sum_of_digits(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = sum_of_digits(a);
        int sum_b = sum_of_digits(b);
        
        if (sum_a == sum_b) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        }
        
        return sum_a < sum_b;
    });
    
    return nums;
}