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
    std::vector<int> l;
    int num;
    while (std::cin >> num) {
        l.push_back(num);
    }
    
    std::cout << median(l) << std::endl;
    
    return 0;
}