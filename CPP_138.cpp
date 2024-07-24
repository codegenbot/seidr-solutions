Here is the completed code:

#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) {
        int sum = 0;
        vector<int> numbers;
        for (int j = 2; j <= i; j += 2) {
            if (sum + j > n)
                break;
            sum += j;
            numbers.push_back(j);
            if (sum == n)
                return true;
        }
    }
    return false;
}