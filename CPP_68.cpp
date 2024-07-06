```cpp
#include <iostream>
#include <vector>

std::vector<int> pluck(const std::vector<int>& arr) {
    int minEvenValueIndex = -1;
    int minEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenValueIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        return {minEvenValue, minEvenValueIndex};
    }

    return {};
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    std::vector<int> result = pluck(numbers);

    if (!result.empty()) {
        std::cout << "The smallest even number is: " << result[0] << "\n";
        std::cout << "Its index in the array is: " << result[1] << "\n";
    } else {
        std::cout << "There are no even numbers in the array.\n";
    }

    return 0;
}