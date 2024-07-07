#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            bool found = false;
            for (const auto& p : result) {
                if (p.first == arr[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back({arr[i], i});
            }
        }
    }

    if (result.empty()) {
        return {};
    } else {
        auto it = min_element(result.begin(), result.end());
        return {{it->first, it->second}};
    }
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }
    std::vector<std::pair<int, int>> result = pluck(arr);
    if (result.empty()) {
        std::cout << "No even numbers found.\n";
    } else {
        std::cout << "The smallest even number and its index are: ";
        for (const auto& p : result) {
            std::cout << "(" << p.first << ", " << p.second << ") ";
        }
        std::cout << "\n";
    }
    return 0;
}