```
#include <iostream>
#include <vector>
#include <variant>

long long double_the_difference(std::vector<std::variant<float, long long>> lst) {
    long long sum = 0;
    for (auto &num : lst) {
        if (std::holds_alternative<float>(num)) {
            float f = std::get<float>(num);
            if (f > 0 && std::floor(f) == f) { 
                if (static_cast<long long>(f) % 2 != 0) { 
                    sum += static_cast<long long>(std::pow(f, 2)); 
                }
            }
        }
    }
    return static_cast<long long>(sum);
}

int main() {
    std::vector<std::variant<float, long long>> lst;
    float input; 
    int n = 0;

    while (1) {
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> input;
        
        if (input < 0) break;
        if (input > 0 && std::floor(input) == input) {
            if (static_cast<long long>(input) % 2 != 0) { 
                lst.push_back(static_cast<long long>(std::pow(input, 2))); 
            }
            else {
                lst.push_back(input);
            }
        }
        else {
            lst.push_back(input);
        }
        n++;
    }
    
    long long odd_sum = double_the_difference(lst);
    return 0;
}