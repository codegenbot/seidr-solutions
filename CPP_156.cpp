```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanMap;

int main() {
    romanMap.clear();
    for (int value : {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}) {
        romanMap.emplace_back(value, std::to_string(value));
    }
    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_roman(i) << std::endl;
    }
    assert(int_to_roman(1000) == "M");
    return 0;
}

std::string int_to_roman(int number) {
    std::string roman = ""; // Initialize the string
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}