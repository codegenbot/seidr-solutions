```cpp
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
    std::vector<int> input;
    int n;

    // Read the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Read the array elements
    for (int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }

    // Call the pluck function
    std::vector<int> output = pluck(input);

    if (output.size() > 0) {
        std::cout << "The smallest even value is: " << output[0] << std::endl;
        std::cout << "Its index in the array is: " << output[1] << std::endl;
    } else {
        std::cout << "No even values found." << std::endl;
    }

    return 0;
}