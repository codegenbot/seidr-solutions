#include <cassert>
#include <string>
#include <sstream>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

std::string int_to_roman(int n) {
    if (n >= 1000) return "M" + int_to_roman(n - 1000);
    else if (n >= 900) return "CM";
    else if (n >= 500) return "D" + int_to_roman(n - 500);
    else if (n >= 400) return "CD";
    else if (n >= 100) {
        std::string result;
        if (n >= 90) { result += "CM"; n -= 90; }
        if (n >= 50) { result += "L"; n -= 50; }
        if (n >= 40) { result += "XL"; n -= 40; }
        if (n >= 10) {
            if (n == 9) { result += "IX"; }
            else if (n >= 5) {
                if (n == 4) { result += "IV"; n = 0; }
                else { result += "V"; n -= 5; }
                while (n >= 9) { result += "IX"; n -= 9; }
                while (n >= 5) { result += "V"; n -= 5; }
            } else {
                if (n == 4) { result += "IV"; n = 0; }
                else { result += "I"; n -= 1; }
                while (n >= 9) { result += "IX"; n -= 9; }
                while (n > 4) { result += "IV"; n -= 4; }
                while (n > 0) { result += "I"; n--; }
            }
        }
        return result;
    } else {
        std::string result;
        if (n >= 4) { result += "IV"; n -= 4; }
        else for (; n > 0; n--) result += "I";
        return result;
    }
}

int main() {
    assert(int_to_roman(1000) == "M");
    return 0;
}