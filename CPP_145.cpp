#include <iostream>
#include <vector>
#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        int numA = (a < 0) ? -a : a;
        int numB = (b < 0) ? -b : b;
        while (numA) { sumA += numA % 10; numA /= 10; }
        while (numB) { sumB += numB % 10; numB /= 10; }
        if (sumA == sumB) return a < b;
        return sumA < sumB;
    });
    return nums;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}