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
    // get user input here
    // for example, you can use the following code to read 5 integers from the console:
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        input.push_back(x);
    }

    // call the pluck function
    std::vector<int> output = pluck(input);

    // print the result here
    if (!output.empty()) {
        std::cout << "The minimum even value is " << output[0] << " at index " << output[1] << "." << std::endl;
    } else {
        std::cout << "No even values found." << std::endl;
    }

    return 0;
}