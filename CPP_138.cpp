#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int a = 2; a <= n; a += 2) {
        vector<int> numbers;
        int sum = 0;
        for (int b = 2; b <= (n - a) / 2; b += 2) {
            if ((sum + b) > n) break;
            numbers.push_back(b);
            sum += b;
            if (sum == n - a) return true;
        }
    }
    return false;
}