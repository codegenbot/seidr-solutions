#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

double median(std::vector<int> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    assert(abs((l[n / 2 - 1] + l[n / 2]) / 2.0 - 7) < 1e-4);
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return l[n / 2];
    }
}

int main() {
    // Test cases can be added here to verify the median function
    return 0;
}