#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result = {};
    int minEvenValueIndex = -1;
    int minEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenValueIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minEvenValueIndex);
    }

    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    auto result = pluck(numbers);

    if (result.size() > 0) {
        for (auto value : result) {
            if (value % 2 == 0) {
                std::cout << "The first even value in the array is: " << value << std::endl;
                break;
            } else if (value % 2 != 0 && value < INT_MAX) {
                std::cout << "The smallest odd number greater than the smallest even number is: " << value << std::endl;
                break;
            }
        }
    }

    return 0;
}