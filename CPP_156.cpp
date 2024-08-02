```cpp
#include <vector>
#include <string>

std::vector<std::string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_mini_roman(int number) {
    std::string roman;
    for (int i = 0; i < 13; ++i) {
        while (number >= val[i]) {
            roman += roman[i];
            number -= val[i];
        }
    }
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}