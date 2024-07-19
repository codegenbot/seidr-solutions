```c++
#include <string>

int main() {
    char s[100];
    int num;
    std::cout << "Enter a string: ";
    std::cin.getline(s, 99);
    num = digitSum(s);
    std::cout << "Sum of digits: " << num << std::endl;
    return 0;
}

int digitSum(char* s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}