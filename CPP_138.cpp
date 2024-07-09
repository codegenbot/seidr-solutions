#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n && i % 2 == 0; ++i) {
        vector<int> numbers;
        int sum = 0;
        for (int j = 1; j <= i / 2; ++j) {
            if (sum + 2 * j == n) return true;
            if (sum + 2 * j > n) break;
            sum += 2 * j;
            numbers.push_back(2 * j);
        }
        if (sum == n) return true;
    }
    return false;
}