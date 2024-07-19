#include <string>

int main() {
    std::string s;
    int num;
    std::cout << "Enter a string: ";
    getline(std::cin, s);
    num = digitSum(s.c_str());
    std::cout << "Sum of digits: " << num << std::endl;
    return 0;
}

int digitSum(const char* s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}