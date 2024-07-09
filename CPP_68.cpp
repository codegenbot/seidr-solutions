```
#include <iostream>
#include <vector>

std::vector<std::vector<int>> pluck(const std::vector<int>& arr) {
    if (arr.empty()) return {};

    int smallest_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    std::vector<int> output = {smallest_even, index};

    return {{output}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (auto& x : arr) std::cin >> x;

    auto result = pluck(arr);

    if (!result.empty()) {
        std::cout << "Smallest even: " << result[0][0] << "\n";
        std::cout << "Index of the smallest even: " << result[0][1] << "\n";
    } else {
        std::cout << "Array is empty." << "\n";
    }

    return 0;
}