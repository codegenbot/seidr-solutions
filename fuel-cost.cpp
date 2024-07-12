#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputVector = {1, 5334};
    int sum = 0;
    for (int num : inputVector) {
        sum += (num + 1) / 3 - 1;
    }
    std::cout << sum << std::endl;
    return 0;
}