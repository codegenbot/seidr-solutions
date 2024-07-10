#include <iostream>
#include <vector>
#include <string>

std::vector<double> double_the_difference() {
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

    return {lst};
}

int main() {
    double output = double_the_difference()[0];
    std::cout << "The numbers that are different from 5 by an odd number: " << output << std::endl;
    return 0;
}