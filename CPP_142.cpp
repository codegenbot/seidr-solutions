```cpp
#include <iostream>
#include <vector>

int sum_squares(std::vector<int> input) {
    int total = 0;
    for (int i = 0; i < input.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            total += input[i] * input[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            total += input[i] * input[i] * input[i];
        }
    }
    return total;
}

int main() {
    std::vector<int> input;
    int value;
    for (int i = 1; i <= 5; i++) {
        std::cout << "Enter the value of element #";
        std::cin >> value;
        input.push_back(value);
    }
    std::cout << sum_squares(input) << std::endl;
    return 0;
}