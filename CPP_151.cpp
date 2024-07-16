#include <vector>
#include <cmath>
#include <iostream>
#include <cassert>

double double_the_difference(std::vector<float> lst);

int main() {
    std::vector<float> lst;
    float input;
    std::cout << "Enter values for the vector (Enter a negative value to stop):" << std::endl;
    while (true) {
        std::cin >> input;
        if (input < 0) break;
        lst.push_back(input);
    }

    double odd_sum = double_the_difference(lst);
    std::cout << "Odd sum: " << odd_sum << std::endl;

    return 0;
}

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}