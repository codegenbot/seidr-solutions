#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> inputVector = {4, 7, 10, 15};
    int sum = 0;
    for (int num : inputVector) {
        sum += std::floor(num / 3.0) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}