#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    while (a != 0) {
        sumA += abs(a % 10);
        a /= 10;
    }
    while (b != 0) {
        sumB += abs(b % 10);
        b /= 10;
    }
    if (sumA == sumB) {
        return false;
    }
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});

    return 0;
}