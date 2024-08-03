#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int n){
    int evens = 0, odds = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
        n /= 10;
    }
    return {evens, odds};
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    
    std::vector<int> result = even_odd_count(input);
    
    std::cout << "Even count: " << result[0] << ", Odd count: " << result[1] << std::endl;

    return 0;
}