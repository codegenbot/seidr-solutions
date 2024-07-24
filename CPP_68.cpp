#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr);

int main() {
    int n;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter elements of array: ";

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> result = pluck(arr);

    if (!result.empty()) {
        std::cout << "Minimum even element is " << result[0] << ", and its index is " << result[1] << "." << std::endl;
    } else {
        std::cout << "Array does not contain any even elements." << std::endl;
    }

    return 0;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

    return result;
}