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
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> output = pluck(arr);

    if (!output.empty()) {
        std::cout << "The smallest even value is: " << output[0] << std::endl;
        std::cout << "The index of the smallest even value is: " << output[1] << std::endl;
    } else {
        std::cout << "No even values found in the array." << std::endl;
    }

    return 0;
}