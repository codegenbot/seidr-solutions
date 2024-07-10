#include <iostream>
#include <vector>
#include <string>

std::vector<double> getNumbersDifferentByOdd() {
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

    return output;
}

double getOddSum() {
    double sum = 0;

    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            int diff = std::abs((int)val - 5);
            if (diff % 2 != 0) {
                sum += diff;
            }
        }
    }

    return sum;
}

int main() {
    std::vector<double> output = getNumbersDifferentByOdd();
    double odd_sum = getOddSum();

    std::cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : output) {
        if (std::abs((int)x - 5) % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "The sum of the differences is: " << odd_sum << std::endl;

    return 0;
}