#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> createPositiveVector(int n) {
    std::vector<float> vec;
    float num;
    for (int i = 0; i < n; ++i) {
        do {
            std::cin >> num;
        } while (num <= 0);
        vec.push_back(num);
    }
    return vec;
}