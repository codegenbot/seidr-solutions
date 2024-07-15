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
    // Test cases to verify the median function
    std::vector<int> arr1 = {1, 3, 5, 7, 9};
    std::cout << "Median of arr1: " << median(arr1) << std::endl;

    std::vector<int> arr2 = {2, 4, 6, 8};
    std::cout << "Median of arr2: " << median(arr2) << std::endl;

    return 0;
}