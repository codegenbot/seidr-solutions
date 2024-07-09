#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n / 2; i += 2) { // iterate through all even numbers up to n/2
        vector<int> evens;
        int sum = 0;
        for (int j = i; j > 0 && sum < n; --j) {
            if (sum + j <= n) {
                sum += j;
                evens.push_back(j);
            }
            else break;
        }
        if (sum == n) return true;
    }
    return false;
}