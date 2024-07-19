```cpp
#include <iostream>
#include <vector>

std::vector<int> lst;

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
    std::vector<int> lst = {1,2,3,4,5};
    std::cout << sum_squares(lst) << std::endl;
    return 0;
}