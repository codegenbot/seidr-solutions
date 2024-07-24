#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        int number = b[i];
        while (number > 0) {
            if (number % 10 == num) {
                ++count;
            }
            number /= 10;
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> digits[i];
    }
    int target;
    std::cin >> target;

    std::vector<int> result = counts(digits, target);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}