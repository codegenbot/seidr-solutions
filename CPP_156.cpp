```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<std::string, int>> romanMap;

romanMap.push_back(std::make_pair("M", 1000));
romanMap.push_back(std::make_pair("CM", 900));
romanMap.push_back(std::make_pair("D", 500));
romanMap.push_back(std::make_pair("CD", 400));
romanMap.push_back(std::make_pair("C", 100));
romanMap.push_back(std::make_pair("XC", 90));
romanMap.push_back(std::make_pair("L", 50));
romanMap.push_back(std::make_pair("XL", 40));
romanMap.push_back(std::make_pair("I", 1));

std::string int_to_mini_romank(int number) {
    for (const auto& pair : romanMap) {
        while (number >= std::stoi(pair.second)) {
            number -= std::stoi(pair.second);
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

for(int i = 1; i <= 3999; i++) { 
    std::cout << i << ": " << int_to_mini_romank(i) << std::endl;
}