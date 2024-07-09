#include <iostream>
#include <vector>
#include <variant>
#include <cmath>

long long double_the_difference(std::vector<std::variant<float, long long>> lst) {
    long long sum = 0;
    for (auto &num : lst) {
        if (std::holds_alternative<float>(num)) {
            float f = std::get<float>(num);
            if (f > 0 && std::floor(f) == f) { 
                if (static_cast<long long>(f) % 2 != 0) { 
                    sum += static_cast<long long>(std::pow(f, 2)); 
                }
            } else {
                sum += static_cast<long long>(f);
            }
        } else {
            long long ll = std::get<long long>(num);
            sum += ll;
        }
    }
    return sum;
}

int main() {
    int n = 0;
    std::vector<std::variant<float, long long>> lst;

    while (1) {
        std::cout << "Enter a number (negative to stop): ";
        float input; 
        std::cin >> input;
        
        if (input < 0) break;
        lst.push_back(input);
        n++;
    }
    
    long long odd_sum = double_the_difference(lst);
    return 0;
}