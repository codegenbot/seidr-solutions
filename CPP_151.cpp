#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && static_cast<int>(lst[i]) % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

std::vector<float> getUserInput() {
    int size;
    std::cout << "Enter the size of the list: ";
    std::cin >> size;

    std::vector<float> lst;
    std::cout << "Enter the elements of the list: ";
    for (int i = 0; i < size; i++) {
        float element;
        std::cin >> element;
        lst.push_back(element);
    }
    return lst;
}

int main() {
    std::vector<float> lst = getUserInput();
    double odd_sum = double_the_difference(lst);
    std::cout << "Odd Sum: " << odd_sum << std::endl;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}