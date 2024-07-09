```cpp
#include <vector>
#include <iostream>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    result.push_back(minEven);
    result.push_back(index);

    return result;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }

    std::vector<int> result = pluck(input);

    if (!result.empty()) {
        std::cout << "Minimum even number: " << result[0] << std::endl;
        std::cout << "Index of the minimum even number: " << result[1] << std::endl;
    } else {
        std::cout << "No even numbers found." << std::endl;
    }

    return 0;
}