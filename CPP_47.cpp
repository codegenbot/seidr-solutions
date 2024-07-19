#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

double median(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return static_cast<double>(l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return l[n / 2];
    }
}

int main() {
    std::vector<int> l = {3, 1, 7, 5, 2, 6, 4}; // Input vector
    double result = median(l);
    std::cout << "Median: " << result << std::endl;
    return 0;
}