#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int smallestEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    result.push_back(smallestEven);
    result.push_back(index);

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> result = pluck(arr);

    if (!result.empty()) {
        std::cout << "Smallest even number: " << result[0] << std::endl;
        std::cout << "Index of the smallest even number: " << result[1] << std::endl;
    } else {
        std::cout << "No even numbers found." << std::endl;
    }

    return 0;
}