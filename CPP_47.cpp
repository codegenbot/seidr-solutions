#include <algorithm>
#include <vector>
#include <cassert>
#include <cmath>
#include <iostream>

double median(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 1) {
        return l[n / 2];
    } else {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    
    std::cout << median(numbers) << std::endl;
    return 0;
}