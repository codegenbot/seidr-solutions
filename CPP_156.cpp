```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanMap;

std::string int_to_mini_romank(int number) {
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            return pair.second;
        }
    }
    if (number > 0) {
        return "I";
    } else if (number < 0) {
        return "-";
    } else {
        return "";
    }
}

return 0;