#include <vector>
#include <algorithm>
#include <cassert>

vector<int> issame(vector<int> a, vector<int> b);

void order_by_points(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        int tempA = abs(a), tempB = abs(b);
        while (tempA > 0) {
            sumA += tempA % 10;
            tempA /= 10;
        }
        while (tempB > 0) {
            sumB += tempB % 10;
            tempB /= 10;
        }
        if (sumA == sumB) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        }
        return sumA < sumB;
    });
}

vector<int> issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> nums = {1, 20, 405, 3, 32};
    order_by_points(nums);
    assert(issame(vector<int>{1, 2}, vector<int>{3, 4}));
}