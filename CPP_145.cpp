#include <iostream>
#include <vector>
#include <algorithm>

int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool compare(int a, int b) {
    int sum_a = sum_of_digits(a);
    int sum_b = sum_of_digits(b);
    
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main() {
    vector<int> nums = {1, 11, -1, -11, -12};
    vector<int> result = order_by_points(nums);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}