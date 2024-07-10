#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += abs(num) % 10;
        num /= 10;
    }
    return sum;
}

vector<int> order_by_points(vector<int> nums) {
    vector<int> sorted_nums = nums; 
    sort(sorted_nums.begin(), sorted_nums.end(), [&](int a, int b) {
        int sum_a = sum_of_digits(a);
        int sum_b = sum_of_digits(b);
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return sorted_nums;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    vector<int> result = order_by_points(nums);
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}