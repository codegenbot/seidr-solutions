#include <map>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string result;
    std::map<int, std::string> roman_map = { make_pair(1000, "M"), make_pair(900, "CM"), make_pair(500, "D"),
                                             make_pair(400, "CD"), make_pair(100, "C"), make_pair(90, "XC"),
                                             make_pair(50, "L"), make_pair(40, "XL"), make_pair(10, "X"),
                                             make_pair(9, "IX"), make_pair(5, "V"), make_pair(4, "IV"), make_pair(1, "I")};
    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}