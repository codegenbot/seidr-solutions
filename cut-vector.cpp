#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    int diff = std::numeric_limits<int>::max();
    int idx = 0;
    for (int i = 1; i < input.size(); ++i) {
        if (std::abs(std::accumulate(input.begin(), input.begin() + i, 0) - std::accumulate(input.begin() + i, input.end(), 0)) < diff) {
            diff = std::abs(std::accumulate(input.begin(), input.begin() + i, 0) - std::accumulate(input.begin() + i, input.end(), 0));
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        std::cout << input[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx; i < input.size(); ++i) {
        std::cout << input[i] << std::endl;
    }

    return 0;
}