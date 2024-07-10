```cpp
#include <iostream>
#include <vector>
#include <string>

struct Result {
    std::vector<double> output;
    double odd_sum;
};

Result double_the_difference() {
    Result result;
    double odd_sum = 0;

    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            int diff = std::abs((int)val - 5);
            if (diff % 2 != 0) {
                result.output.push_back(val);
                odd_sum += diff;
            }
        }
    }

    result.odd_sum = odd_sum;

    return result;
}

int main() {
    Result output = double_the_difference();

    std::cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : output.output) {
        if (std::abs((int)x - 5) % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}