#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
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
    std::vector<int> odd_result;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_result.push_back(num);
        }
    }
    std::sort(odd_result.begin(), odd_result.end());
    return odd_result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> odd_collatz = get_odd_collatz(n);
    std::vector<int> comparison_vector = {1, 3, 5, 7}; 

    if (issame(odd_collatz, comparison_vector)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are different." << std::endl;
    }

    return 0;
}