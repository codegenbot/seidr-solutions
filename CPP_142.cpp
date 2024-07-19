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

int main() {
    std::cout << sum_squares({data[0], data[1], data[2], data[3], data[4]});
    return 0;
}