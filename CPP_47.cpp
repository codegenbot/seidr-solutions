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
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    std::cout << median(input) << std::endl;
    return 0;
}