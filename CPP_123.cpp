#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);

    std::vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }

    std::sort(odd_numbers.begin(), odd_numbers.end());

    return odd_numbers;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = get_odd_collatz(n);
    std::vector<int> expected = {1, 3, 5, 9, 17, 25, 27};

    if (issame(result, expected)) {
        std::cout << "Correct output" << std::endl;
    } else {
        std::cout << "Incorrect output" << std::endl;
    }

    return 0;
}