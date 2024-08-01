#include <vector>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) { // iterate over all even numbers up to n
        vector<int> nums;
        int sum = 0;
        for (int j = 1; j <= 4 && sum < n; ++j) {
            if (i + (j * 2) <= n) {
                nums.push_back(i + (j * 2));
                sum += i + (j * 2);
            } else {
                break;
            }
        }
        if (sum == n) return true;
    }
    return false;
}