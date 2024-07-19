#include <iostream>
#include <cmath>
#include <initializer_list>
#include <string>
#include <vector>

int sum_squares(std::initializer_list<double> lst) {
    int total = 0;
    for (double num : lst) {
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num, 2);
    }
    return total;
}

int main() {
    std::cout << "Enter numbers separated by space: ";
    std::string input;
    while (std::getline(std::cin, input)) {
        std::vector<std::string> nums;
        for (const auto& s : boost::split(input, ' ')) {
            double num = std::stod(s);
            int total = sum_squares({num});
            std::cout << "Sum of squares for number: " << num << " is: " << total << "\n";
        }
    }
    return 0;
}