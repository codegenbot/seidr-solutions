#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputVector = {2, 5, 8, 13};
    int sum = 0;
    for (int num : inputVector) {
        sum += (std::max(0, (num / 3 - 2)) * 3) + 2;
    }
    std::cout << sum << std::endl;
    return 0;
}