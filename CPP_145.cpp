#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = accumulate(to_string(abs(a)).begin(), to_string(abs(a)).end(), 0, 
        [](int sum, char c) {
            return sum + (c - '0');
        });
        int sumB = accumulate(to_string(abs(b)).begin(), to_string(abs(b)).end(), 0, 
        [](int sum, char c) {
            return sum + (c - '0');
        });
        if (sumA == sumB) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        } else {
            return sumA < sumB;
        }
    });
    return nums;
}