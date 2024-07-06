#include <iostream>
#include <vector>

std::vector<int> pluck(const std::vector<int>& arr) {
    int minEvenValue = INT_MAX;
    int minEvenValueIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenValueIndex = i;
        }
    }

    std::vector<int> result;
    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minEvenValueIndex);
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> output = pluck(arr);

    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}