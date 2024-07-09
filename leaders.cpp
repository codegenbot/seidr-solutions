```cpp
#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& inputVector) {
    std::vector<int> result;
    int n = inputVector.size();
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || inputVector[i] >= inputVector[i + 1]) {
            result.push_back(inputVector[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> input = {17, 28, 4};
    std::vector<int> result = leaders(input);
    for (int leader : result) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;
    return 0;
}