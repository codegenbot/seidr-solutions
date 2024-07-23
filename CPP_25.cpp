#include <iostream>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

#include <vector>
#include <cassert>

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    while (num % 2 == 0) {
        factors.push_back(2);
        num /= 2;
    }
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    if (num > 2) {
        factors.push_back(num);
    }
    return factors;
}