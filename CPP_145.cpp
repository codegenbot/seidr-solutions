#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> order_by_points(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        auto sumDigits = [](int num) {
            return accumulate(to_string(abs(num)).begin(), to_string(abs(num)).end(), 0,
                  [](int sum, char c) {
                      return sum + (c - '0');
                  });
        };
        int sumA = sumDigits(a);
        int sumB = sumDigits(b);
        if (sumA == sumB) {
            return a < b;
        } else {
            return sumA < sumB;
        }
    });
    return nums;
}