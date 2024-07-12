#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> order_by_points(const vector<int>& nums) {
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