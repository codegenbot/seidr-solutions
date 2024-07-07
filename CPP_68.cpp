```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> pluck(const std::vector<int>& arr) {
    if (arr.empty()) {
        return {};
    }

    auto result = std::vector<std::pair<int, int>> {};

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (result.empty() || arr[i] < result[0].first)) {
            result = {{arr[i], i}};
        } else if (arr[i] % 2 == 0 && arr[i] == result[0].first) {
            result.push_back({arr[i], i});
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    for (auto& num : numbers) {
        std::cout << "Enter element " << ++num - 1 << ": ";
        std::cin >> num;
    }

    auto result = pluck(numbers);

    if (!result.empty()) {
        std::cout << "The smallest even number is: " << result[0].first
                  << ", found at index: " << result[0].second << '\n';
    } else {
        std::cout << "No even numbers were found.\n";
    }

    return 0;
}