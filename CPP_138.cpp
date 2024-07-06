#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) {
        vector<int> numbers;
        int sum = 0;
        for (int j = 2; j <= i; j += 2) {
            numbers.push_back(j);
            sum += j;
            if (sum == n) return true;
            if (sum > n) break;
        }
    }
    return false;
}