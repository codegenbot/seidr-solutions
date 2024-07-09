```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr = {4, 2, 7, 10};
    std::vector<std::vector<int>> result = pluck(arr);

    if (result.size()) {
        for (const auto &elem : result[0]) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No even numbers found." << std::endl;
    }

    return 0;
}

std::vector<std::vector<int>> pluck(std::vector<int> arr) {
    if (arr.empty()) return {{-1, -1}};

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

    std::vector<std::vector<int>> result;
    result.push_back(output);

    return result;
}