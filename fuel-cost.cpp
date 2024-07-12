#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputVector = {4, 7, 10, 15};
    long long sum = 0;
    for (int num : inputVector) {
        sum += ((num + 2) / 3);
    }
    std::cout << sum << std::endl;
    return 0;
}