#include <bits/stdc++.h>
using namespace std;

bool issame(int a, int b) {
    int sum1 = 0;
    int num1 = abs(a);
    while (num1 > 0) {
        sum1 += num1 % 10;
        num1 /= 10;
    }
    int sum2 = 0;
    int num2 = abs(b);
    while (num2 > 0) {
        sum2 += num2 % 10;
        num2 /= 10;
    }

    return sum1 == sum2;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sumOfDigits, nums[i]);
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }

    return result;
}