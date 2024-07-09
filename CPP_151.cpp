#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<long long>& lst) {
    long long sum = 0;
    for (auto &num : lst) {
        if (num > 0 && num == static_cast<long long>(std::floor(num))) { 
            if (num % 2 != 0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    int n = 0;
    std::vector<long long> lst;

    while (1) {
        double input; 
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> input;
        
        if (input < 0) break;
        if (input > 0 && input == static_cast<double>(std::floor(input))) {
            if (static_cast<long long>(input) % 2 != 0) { 
                lst.push_back(static_cast<long long>(std::pow(input, 2))); 
            }
            else {
                lst.push_back(static_cast<long long>(input));
            }
        }
        else {
            lst.push_back(static_cast<long long>(input));
        }
        n++;
    }

    long long sum = double_the_difference(lst);
    return 0;
}