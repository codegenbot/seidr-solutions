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

bool compare(int num1, int num2) {
    int sum1 = sum_of_digits(num1);
    int sum2 = sum_of_digits(num2);
    if (sum1 == sum2) {
        return num1 < num2;
    }
    return sum1 < sum2;
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