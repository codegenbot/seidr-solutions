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
    int input;
    std::cin >> input;

    std::vector<int> result = get_odd_collatz(input);
    std::vector<int> expected_result{1, 3, 5, 9, 17, 25};

    if (issame(result, expected_result)) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}