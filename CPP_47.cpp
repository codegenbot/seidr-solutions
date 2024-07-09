#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

// Function definition for median calculation
double median(std::vector<int> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}

// Example usage in main function
int main() {
    // Test case with assert
    assert( abs(median({8, 1, 3, 9, 9, 2, 7}) - 7 ) < 1e-4 );
    
    return 0;
}