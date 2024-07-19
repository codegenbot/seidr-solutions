#include <iostream>
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
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    vector<int> input_nums = {1, 11, -1, -11, -12};
    vector<int> output_nums = order_by_points(input_nums);
    
    for (int num : output_nums) {
        cout << num << " ";
    }
    
    return 0;
}