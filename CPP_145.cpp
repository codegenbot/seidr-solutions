#include <iostream>
#include <vector>
#include <algorithm>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool compare(int a, int b) {
    int sumA = sumOfDigits(a);
    int sumB = sumOfDigits(b);

    if (sumA == sumB) {
        return a < b;
    }
    return sumA < sumB;
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