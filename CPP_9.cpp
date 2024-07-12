#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> maxNumbers;
    int currentMax = INT_MIN;

    for (int num : numbers) {
        if (num > currentMax)
            currentMax = num;
        maxNumbers.push_back(currentMax);
    }

    return maxNumbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b; 
}

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter numbers (enter -1 to stop): ";
    while ((std::cin >> num) && (num != -1)) {
        numbers.push_back(num);
    }

    std::vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        std::cout << "Maximum up to " << i + 1 << " is " << maxNumbers[i] << std::endl;
    }

    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}