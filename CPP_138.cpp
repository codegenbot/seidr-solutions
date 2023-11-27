#include <iostream>
using namespace std;

bool is_equal_to_sum_even(int n) {
    // Check if n is less than 8 or odd
    if (n < 8 || n % 2 != 0) {
        return false;
    }
    
    // Check if n can be written as sum of 4 positive even numbers
    for (int i = 2; i <= n / 2; i += 2) {
        for (int j = 2; j <= n / 2; j += 2) {
            for (int k = 2; k <= n / 2; k += 2) {
                for (int l = 2; l <= n / 2; l += 2) {
                    if (i + j + k + l == n) {
                        return true;
                    }
                }
            }
        }
    }
    
    return false;
}

int main() {
    // Test cases
    cout << is_equal_to_sum_even(4) << endl;  // false
    cout << is_equal_to_sum_even(6) << endl;  // false
    cout << is_equal_to_sum_even(8) << endl;  // true
    
    return 0;
}