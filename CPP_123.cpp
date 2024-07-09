#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    
    auto output = get_odd_collatz(num);

    if (!output.empty()) {
        std::cout << "The sequence for the input number is: ";
        for (int i : output) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No odd Collatz sequence found for this number." << std::endl;
    }

    return 0;
}