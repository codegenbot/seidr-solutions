```
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    } else {
        result.push_back({0, -1}); 
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::vector<std::pair<int, int>> output = pluck(arr);
    
    for (const auto& pair : output) {
        std::cout << "Even: " << pair.first << ", Index: " << pair.second << std::endl;
    }

    return 0;
}