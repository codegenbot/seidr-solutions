```cpp
#include <vector>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string result;
    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}

int main() {
    std::vector<std::pair<int, const char*>> roman_map;
    for (int i = 1000; i >= 1; i /= 10) {
        std::string roman = "";
        if (i == 1000) roman = "M";
        else if (i == 900) roman = "CM";
        else if (i == 500) roman = "D";
        else if (i == 400) roman = "CD";
        else if (i == 100) roman = "C";
        else if (i == 90) roman = "XC";
        else if (i == 50) roman = "L";
        else if (i == 40) roman = "XL";
        else if (i == 10) roman = "X";
        else if (i == 9) roman = "IX";
        else if (i == 5) roman = "V";
        else if (i == 4) roman = "IV";
        else roman = "I" + std::to_string(i);
        roman_map.push_back({i, roman.c_str()});
    }
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}