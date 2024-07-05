#include <iostream>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float val;
    
    std::cout << "Enter float values (enter any non-number to stop): ";
    while (std::cin >> val) {
        lst.push_back(val);
    }
    
    std::cin.clear();
    std::string dummy;
    std::cin >> dummy; // Consume non-number input

    std::cout << "Sum of squares of positive odd integers: " << double_the_difference(lst) << std::endl;

    return 0;
}