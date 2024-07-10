#include <iostream>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1; 
        } else if (islower(c)) {
            sum += c - 'a' + 1;
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
    return 0;
}