```cpp
#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;

}

int main() {
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;
    int result = digitSum(s);
    std::cout << "The sum is: " << result << std::endl;
}