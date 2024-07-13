#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    int n, temp;
    std::vector<int> arr;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> temp;
        arr.push_back(temp);
    }

    int result = can_arrange(arr);

    if (result == -1) {
        std::cout << "The array is already arranged in ascending order." << std::endl;
    } else {
        std::cout << "The first element that is not in the correct order is at index " << result << "." << std::endl;
    }

    return 0;
}