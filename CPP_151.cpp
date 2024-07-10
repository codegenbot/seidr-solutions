#include <iostream>
#include <vector>
#include <string>

std::vector<double> double_the_difference() {
    std::vector<double> output;
    double odd_sum = 0;

    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            int diff = std::abs((int)val - 5);
            if (diff % 2 != 0) {
                output.push_back(val);
                odd_sum += diff;
            }
        }
    }

    return {output, odd_sum};
}

int main() {
    std::vector<std::pair<double, double>> result = double_the_difference();

    std::cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : result) {
        if (std::abs((int)x - 5) % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}