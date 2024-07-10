#include <iostream>
#include <vector>
#include <string>

void double_the_difference(const std::vector<double>& lst) {
    for (double x : lst) {
        if (abs((int)x - 5) % 2 != 0) {
            std::cout << x * 2 << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    double odd_sum = 0;
    std::vector<double> lst;

    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            int diff = abs((int)val - 5);
            if (diff % 2 != 0) {
                odd_sum += val;
            }
            lst.push_back(val);
        }
    }

    for (double x : lst) {
        if (abs((int)x - 5) % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    double_the_difference(lst);

    return 0;
}