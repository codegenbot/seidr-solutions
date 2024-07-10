#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> double_the_difference() {
    std::vector<float> lst;
    float sum = 0.0;
    float odd_sum = 0.0;

    std::cout << "Enter the size of the vector: ";
    int size;
    std::cin >> size;

    std::cout << "Enter " << size << " float numbers: ";
    for (int i = 0; i < size; ++i) {
        float num;
        std::cin >> num;
        lst.push_back(num);
    }

    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num;
        }
    }

    sum = odd_sum * odd_sum;

    return {sum};
}