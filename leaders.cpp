```c++
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
    if (vec.empty()) {
        std::cout << "Error: Input vector is empty." << std::endl;
    } else {
        std::vector<int> result = leaders(vec);
        for (int num : result) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}