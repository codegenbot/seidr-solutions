#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputVector = {4, 7, 10, 15}; // Example input
    int sum = 0;
    for (int num : inputVector) {
        sum += (num / 3) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}