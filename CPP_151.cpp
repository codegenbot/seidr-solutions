#include <iostream>
#include <vector>

long long double_the_difference(const std::vector<long long>& lst) {
    long long sum = 0;
    for (const auto &num : lst) {
        if (num > 0 && num == static_cast<long long>(std::floor(num))) { 
            if (num % 2 != 0) { 
                sum += num; 
            }
        }
    }
    return sum;
}

int main() {
    float input; 
    int n = 0;
    std::vector<long long> lst;

    while (1) {
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> n;
        if (n < 0) break;
        std::cin >> input;
        
        if (input > 0 && std::floor(input) == input) {
            if (static_cast<long long>(input) % 2 != 0) { 
                lst.push_back(static_cast<long long>(n * static_cast<long double>(input * input))); 
            }
            else {
                lst.push_back(static_cast<long long>(n * input));
            }
        }
        else {
            lst.push_back(static_cast<long long>(n * input));
        }
    }
    
    long long odd_sum = double_the_difference(lst);
    return 0;
}