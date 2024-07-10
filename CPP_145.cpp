#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    int sumA = 0, sumB = 0;
    while(a > 0) {
        sumA += a % 10;
        a /= 10;
    }
    while(b > 0) {
        sumB += b % 10;
        b /= 10;
    }
    return sumA == sumB;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        while (num > 0) {
            int sumOfDigits = 0;
            while (num > 0) {
                sumOfDigits += num % 10;
                num /= 10;
            }
            pairs.emplace_back(sumOfDigits, i);
        }
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (int i = 0; i < pairs.size(); i++) {
        result.push_back(nums[pairs[i].second]);
    }

    return result;
}