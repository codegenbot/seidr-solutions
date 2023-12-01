#include <algorithm>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> order_by_points(vector<int>& nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    
    while (a > 0) {
        sumA += a % 10;
        a /= 10;
    }
    
    while (b > 0) {
        sumB += b % 10;
        b /= 10;
    }
    
    if (sumA == sumB) return false;
    return sumA < sumB;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));    
    return 0;
}