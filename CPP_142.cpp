#include <iostream>
#include <vector>

int data[] = {1, 2, 3, 4, 5};

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

int main_function() {
    int n = sizeof(data) / sizeof(*data);
    std::vector<int> vec(data, data + sizeof(data) / sizeof(*data));
    std::cout << sum_squares(vec) << std::endl;
    return 0;
}