#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

double median(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}

int main() {
    std::vector<int> l;
    int n, value;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        l.push_back(value);
    }
    
    double result = median(l);
    std::cout << "Median is: " << result << std::endl;
    
    assert(std::abs(result - median({8, 1, 3, 9, 9, 2, 7})) < 1e-4);
    
    return 0;
}