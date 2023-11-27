#include <vector>
#include <algorithm>

bool compareDigits(int a, int b) {
    int sumA = 0;
    int sumB = 0;
    int tempA = abs(a);
    int tempB = abs(b);

    while (tempA > 0) {
        sumA += tempA % 10;
        tempA /= 10;
    }

    while (tempB > 0) {
        sumB += tempB % 10;
        tempB /= 10;
    }

    if (sumA == sumB) {
        return a < b;
    }

    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compareDigits);
    return nums;
}