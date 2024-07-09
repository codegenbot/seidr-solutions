```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanMap;

romanMap.push_back({ 1000, "M" });
romanMap.push_back({ 900, "CM" });
romanMap.push_back({ 500, "D" });
romanMap.push_back({ 400, "CD" });
romanMap.push_back({ 100, "C" });
romanMap.push_back({ 90, "XC" });
romanMap.push_back({ 50, "L" });
romanMap.push_back({ 40, "XL" });
romanMap.emplace_back(1, "I");

std::string int_to_string(int number) {
    if (number == 0)
        return "0";
    std::string str = "";
    char* roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char* tens[] = {"", "", "X", "XX", "XXX", "XL", "L", "XC", "C"};
    if (number >= 10) {
        str += tens[number / 10];
        number %= 10;
    }
    if (number > 0)
        str += roman[number];
    return str;
}

std::string int_to_mini_roman(int number) {
    std::string roman = "";
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman = roman + int_to_string(pair.second);
        }
    }
    if (number > 0) {
        roman += "I";
    } else if (number < 0) {
        roman = "-" + roman;
    }
    return roman;
}

int main() {
    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_mini_roman(i) << std::endl;
    }
    return 0;
}