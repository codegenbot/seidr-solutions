#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> leaders;
    std::vector<int> numbers = {5, 3, 20, 15, 8};

    int maxRight = numbers.back();
    leaders.push_back(maxRight);

    for (int i = numbers.size() - 2; i >= 0; i--) {
        if (numbers[i] >= maxRight) {
            maxRight = numbers[i];
            leaders.push_back(maxRight);
        }
    }

    std::reverse(leaders.begin(), leaders.end());

    for (int leader : leaders) {
        std::cout << leader << " ";
    }

    return 0;
}