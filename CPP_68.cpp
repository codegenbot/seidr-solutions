```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size())
        return false;
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    }

    return result;
}

int main() {
    std::vector<int> v1 = {2, 4, 3};
    std::vector<int> v2 = {2, 4, 3};

    if (issame(v1, v2)) {
        std::vector<int> output = pluck(v1);
        for (int i : output) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "The vectors are not same\n";
    }

    return 0;
}