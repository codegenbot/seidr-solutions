#include <vector>
#include <cstdlib> // for abs
#include <iostream> // for testing/debugging
using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    
    int sign_product = 1;
    int magnitude_sum = 0;
    
    for (int num : arr) {
        if (num > 0) {
            sign_product *= 1;
        } else if (num < 0) {
            sign_product *= -1;
        } else {
            sign_product *= 0;
        }
        magnitude_sum += abs(num);
    }
    
    return sign_product * magnitude_sum;
}

// For testing
int main() {
    cout << prod_signs({-1, 1, 1, 0}) << endl; // Output: 0
    cout << prod_signs({-1, 1, 1, 2}) << endl; // Output: -5
    cout << prod_signs({1, 2, 3, 4}) << endl; // Output: 10
    cout << prod_signs({-1, -2, -3, -4}) << endl; // Output: 10
    return 0;
}