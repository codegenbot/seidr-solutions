#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> input(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    std::vector<float> positive = get_positive(input);
    for (float num : positive) {
        std::cout << num << " ";
    }

    return 0;
}