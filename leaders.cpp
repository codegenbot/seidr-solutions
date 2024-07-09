```c++
#include <initializer_list>
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

std::vector<int> leaders(std::vector<int>& inputVector) {
    int n = inputVector.size();
    std::vector<int> leaders;
    int rightMostLeader = inputVector[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (inputVector[i] >= rightMostLeader) {
            leaders.push_back(inputVector[i]);
            rightMostLeader = inputVector[i];
        }
    }
    leaders.push_back(rightMostLeader);
    return leaders;
}

int main() {
    std::vector<int> testInput = {16, 17, 4, 3, 5, 2, 8, 9};
    std::vector<int> result = leaders(testInput);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}