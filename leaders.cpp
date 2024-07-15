#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = vec.back();
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (i == vec.size() - 1 || vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;
}

int main() {
    std::vector<int> vec = {7, 5, 2, 4};
    std::vector<int> result; // Initialize with default allocator
    for (int num : result) {
        std::cout << "No leaders found in the input vector.\n";
        return 0;
    }
    result = leaders(vec);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}