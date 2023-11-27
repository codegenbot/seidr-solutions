#include <vector>
#include <string>
#include <cassert>
using namespace std;

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    int tempA = a, tempB = b;
    while (tempA != 0) {
        int digit = tempA % 10;
        if (digit >= 0) {
            sumA += digit;
        }
        tempA /= 10;
    }
    while (tempB != 0) {
        int digit = tempB % 10;
        if (digit >= 0) {
            sumB += digit;
        }
        tempB /= 10;
    }

    if (sumA == sumB) {
        return a < b;
    }

    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}