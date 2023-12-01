#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (a > 0) {
            sumA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumB += b % 10;
            b /= 10;
        }
        return sumA == sumB ? a < b : sumA < sumB;
    });
    return nums;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});
    vector<int> expected = {-76, -21, 0, 4, 23, 6, 6};
    assert(issame(result, expected));

    return 0;
}