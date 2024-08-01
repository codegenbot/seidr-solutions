#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    std::vector<int> oddNumbers;
    for (int num : result) {
        if (num % 2 != 0) {
            oddNumbers.push_back(num);
        }
    }
    std::sort(oddNumbers.begin(), oddNumbers.end());
    return oddNumbers;
}

int main() {
    std::vector<int> vec1 = {3, 5, 7};
    std::vector<int> vec2 = {3, 5, 7};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}