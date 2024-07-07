```cpp
#include <string>
#include <iostream>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += std::stoi(std::string(1, c)) - 48; 
        }
    }
    return sum;

}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    int result = digitSum(str);
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}