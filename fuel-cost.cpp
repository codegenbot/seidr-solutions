#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputVector = {2, 5, 8, 13};
    int sum = 0;
    for (int num : inputVector) {
        sum += (num / 3 - 2);
    }
    std::cout << sum << std::endl;
    return 0;
}