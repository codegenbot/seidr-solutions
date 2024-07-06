#include <vector>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string mini_roman;
    std::vector<std::pair<int, const char*>> roman_map;
    roman_map.push_back({1000, "M"});
    roman_map.push_back({900, "CM"});
    roman_map.push_back({500, "D"});
    roman_map.push_back({400, "CD"});
    roman_map.push_back({100, "C"});
    roman_map.push_back({90, "XC"});
    roman_map.push_back({50, "L"});
    roman_map.push_back({40, "XL"});
    roman_map.push_back({10, "X"});
    roman_map.push_back({9, "IX"});
    roman_map.push_back({5, "V"});
    roman_map.push_back({4, "IV"});
    roman_map.push_back({1, "I"});

    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            mini_roman += pair.second;
            number -= pair.first;
        }
    }
    return mini_roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}