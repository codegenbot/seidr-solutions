#include <iostream>
#include <initializer_list>
#include <vector>

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
    std::vector<int> testInput = {16, 17, 4, 3, 5, 2, 8, 9};
    std::vector<int> result = leaders(testInput);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}