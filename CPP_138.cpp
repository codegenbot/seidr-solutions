#include <vector>

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) { // loop through all even numbers up to n
        std::vector<int> nums;
        int sum = 0;
        for (int j = i; j <= n; j += 2) { // add the current number and subsequent even numbers to the vector
            nums.push_back(j);
            sum += j;
            if (sum == n) return true; // if the sum equals n, return true
            else if (sum > n) break; // if the sum exceeds n, stop adding numbers
        }
    }
    return false; // if no combination of 4 even numbers sums up to n, return false
}