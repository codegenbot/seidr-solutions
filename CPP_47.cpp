#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

double median(std::vector<int> l) {
    // Sort the input vector
    sort(l.begin(), l.end());
    
    // Calculate the median
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return l[n / 2];
    }
}

int main() {
    // Test case
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4 );
    
    return 0;
}