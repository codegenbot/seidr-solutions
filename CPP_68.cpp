#include <vector>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<vector<int>> result = pluck(arr);

    for (const auto& v : result) {
        std::cout << v[0] << " at index " << v[1] << std::endl;
    }

    return 0;
}

std::vector<vector<int>> pluck(std::vector<int> arr) {
    std::vector<vector<int>> result;

    if (arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    std::vector<int> output;
    output.push_back(smallest_even);
    output.push_back(index);

    result.push_back(output);

    return result;
}