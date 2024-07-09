#include <vector>
using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) {
        int sum = 0;
        vector<int> evens;
        for (int j = 2; j <= n; j += 2) {
            if (sum + j > n)
                break;
            sum += j;
            evens.push_back(j);
            if (sum == n) {
                return true;
            }
        }
    }
    return false;
}