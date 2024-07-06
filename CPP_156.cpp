#include <string>

std::string mini_roman_to_int(std::string number) {
    std::vector<std::pair<std::string, int>> roman = {{"M", 1000}, {"CM", 900}, {"D", 500},
                                                     {"CD", 400}, {"C", 100}, {"XC", 90},
                                                     {"L", 50}, {"XL", 40}, {"X", 10},
                                                     {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};
    int result = 0;
    
    for (const auto& pair : roman) {
        while (number.find(pair.first) == 0) {
            number.erase(0, pair.first.length());
            result += pair.second;
        }
    }
    
    return std::to_string(result);
}