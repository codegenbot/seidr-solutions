```cpp
#include <iostream>
#include <string>

std::string solve(std::string str);

int main() {
    std::string N;
    std::cout << "Enter a string: ";
    std::cin >> N;
    std::cout << "Sum of bits is: " << solve(N) << std::endl;
}

int solve(std::string str) {
    int sum = 0;
    for (char c : str) {
        if (c == '1') {
            sum++;
        }
    }
    return sum;
}