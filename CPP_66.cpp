```cpp
#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1;
        }
    }
    return sum;

}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    int result = digitSum(s);
    std::cout << "The digit sum is: " << result << std::endl;
    return 0;
}