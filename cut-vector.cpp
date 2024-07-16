#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int totalSum = 0;
    for (int num : vec) {
        totalSum += num;
    }
    int idx = 0;
    int leftSum = 0;
    int closestDiff = totalSum;
    
    for (int i = 0; i < vec.size(); ++i) {
        if (abs(2 * leftSum - totalSum) < closestDiff) {
            closestDiff = abs(2 * leftSum - totalSum);
            idx = i;
        }
        leftSum += vec[i];
    }
    
    for (int i = 0; i <= idx; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx + 1; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }
    
    return 0;
}