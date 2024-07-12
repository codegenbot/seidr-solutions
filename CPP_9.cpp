```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

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
    
    std::vector<int> v1({3, 2, 3, 100, 3});
    std::vector<int> v2({3, 3, 3, 100, 100});
    assert(std::vector<int>(v1) == v2);
    
    return 0;
}