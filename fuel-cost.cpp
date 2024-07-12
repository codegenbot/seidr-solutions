#include <vector>
#include <iostream>

int main() {
    std::vector<int> inputVector;
    int num;
    while (std::cin >> num) {
        inputVector.push_back(num);
    }

    int sum = 0;
    for (int num : inputVector) {
        sum += (num / 3) - 2;
    }

    std::cout << sum;

    return 0;
}