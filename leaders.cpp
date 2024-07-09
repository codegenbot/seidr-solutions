#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& inputVector) {
    std::vector<int> result;
    int n = inputVector.size();
    int leader = inputVector[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (inputVector[i] >= leader) {
            leader = inputVector[i];
            result.push_back(leader);
        }
    }
    return result;
}

int main() {
    std::vector<int> input = {17, 11, 13, 2, 3, 7};
    std::vector<int> result = leaders(input);
    for (int leader : result) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;
    return 0;
}