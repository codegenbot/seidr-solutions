#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputVector = {1, 5334};
    int sum = 0;
    for (int num : inputVector) {
        sum += static_cast<int>(num / 3) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}