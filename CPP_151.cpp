```cpp
#include <vector>
#include <cassert>
#include <iostream>

std::vector<double> lst;

double double_the_difference(std::initializer_list<double> lst) {
    int sum = 0;
    for (double x : lst) {
        int diff = std::abs((int)x - 5);
        if (diff % 2 != 0) {
            sum += diff;
        }
    }
    return static_cast<double>(sum);
}

int main() {
    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            int diff = std::abs((int)val - 5);
            if (diff % 2 != 0) {
                lst.push_back(val);
            }
        }
    }

    std::cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : lst) {
        if (std::abs((int)x - 5) % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    assert(double_the_difference(lst) == 0);

    return 0;
}