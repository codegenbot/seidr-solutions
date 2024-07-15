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

int main2() {
    int n;
    std::cin >> n;
    
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    double result = median(numbers);
    std::cout << result << std::endl;
    
    return 0;
}