Here is the completed code:

#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i++) {
        if (i % 2 != 0) continue;
        vector<int> numbers;
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            if (j % 2 != 0) continue;
            if (sum + j > n) break;
            sum += j;
            numbers.push_back(j);
            if (sum == n) return true;
        }
    }
    return false;
}