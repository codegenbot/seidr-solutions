#include <string>

int main() {
    std::string s;
    int num;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s); 
    num = digitSum(s);
    std::cout << "Sum of digits: " << num << std::endl;
    return 0;
}

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}