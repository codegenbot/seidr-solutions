#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<double> lst;
    double odd_sum = 0;

    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            int diff = std::abs((int)val - 5);
            if (diff % 2 != 0) {
                lst.push_back(val);
                odd_sum += diff;
            }
        }
    }

    std::cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : lst) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "The sum of the differences is: " << odd_sum << std::endl;
    return 0;
}