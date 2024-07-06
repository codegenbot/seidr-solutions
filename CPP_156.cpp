#include <map>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string result;
    std::map<int, std::string> roman_map = {std::make_pair(1000, "M"), std::make_pair(900, "CM"),
                                            std::make_pair(500, "D"), std::make_pair(400, "CD"),
                                            std::make_pair(100, "C"), std::make_pair(90, "XC"),
                                            std::make_pair(50, "L"), std::make_pair(40, "XL"),
                                            std::make_pair(10, "X"), std::make_pair(9, "IX"),
                                            std::make_pair(5, "V"), std::make_pair(4, "IV"), std::make_pair(1, "I")};
    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}