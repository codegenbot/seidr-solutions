#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int sum_of_digits(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

vector<int> order_by_points(vector<int> nums);

bool issame(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {1, 11, -1, -11, -12};
    vector<int> sorted_nums = order_by_points(nums);
    for (int num : sorted_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    nums = {};
    sorted_nums = order_by_points(nums);
    for (int num : sorted_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    if (issame(sorted_nums, {-76, -21, 0, 4, 23, 6, 6})) {
        std::cout << "Result is correct" << std::endl;
    } else {
        std::cout << "Result is incorrect" << std::endl;
    }
    
    return 0;
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