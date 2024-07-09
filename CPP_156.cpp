#include <cassert>
#include <string>
#include <sstream>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

std::string int_to_string(int n) {
    if (n < 0) return "Invalid Input";
    else if (n == 0) return "0";
    std::stringstream ss;
    if (n >= 1000) { ss << "M"; n -= 1000; }
    if (n >= 900) { ss << "CM"; n -= 900; }
    if (n >= 500) { ss << "D"; n -= 500; }
    if (n >= 400) { ss << "CD"; n -= 400; }
    if (n >= 100) {
        if (n >= 90) { ss << "CM"; n -= 90; }
        else if (n >= 50) { ss << "L"; n -= 50; }
        else if (n >= 40) { ss << "XL"; n -= 40; }
        else {
            while (n >= 10 && n % 10 < 4) {
                ss << "X";
                n -= 10;
            }
            if (n == 9) { ss << "IX"; n = 0; }
            else if (n >= 5) {
                if (n >= 50) { ss << "L"; n -= 50; }
                else { ss << "V"; n -= 5; }
                while (n > 4 && n % 10 < 4) {
                    ss << "V";
                    n -= 5;
                }
            }
        }
    }
    if (n > 0) {
        if (n >= 9) { ss << "IX"; n = 0; }
        else if (n >= 5) {
            if (n == 4) { ss << "IV"; n = 0; }
            else { ss << "V"; n -= 5; }
            while (n > 4 && n % 10 < 4) {
                ss << "V";
                n -= 5;
            }
        }
    }
    return ss.str();
}

int main() {
    assert(int_to_string(1000) == "M");
    std::cout << int_to_string(1000) << std::endl; // prints M
    return 0;
}