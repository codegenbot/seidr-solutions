#include <map>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string result;
    std::map<int, std::string> roman_map;
    roman_map[1000] = "M";
    roman_map[900] = "CM";
    roman_map[500] = "D";
    roman_map[400] = "CD";
    roman_map[100] = "C";
    roman_map[90] = "XC";
    roman_map[50] = "L";
    roman_map[40] = "XL";
    roman_map[10] = "X";
    roman_map[9] = "IX";
    roman_map[5] = "V";
    roman_map[4] = "IV";
    roman_map[1] = "I";

    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}