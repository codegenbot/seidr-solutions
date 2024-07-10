#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

std::string int_to_mini_romank(int num) {
    std::map<int, std::string> romanMap;
    romanMap = {{1000, "M"},
                 {900, "CM"},
                 {500, "D"},
                 {400, "CD"},
                 {100, "C"},
                 {90, "XC"},
                 {50, "L"},
                 {40, "XL"},
                 {10, "X"},
                 {9, "IX"},
                 {5, "V"},
                 {4, "IV"},
                 {1, "I"}};
    
    std::vector<std::pair<int, std::string>> romanVector(romanMap.begin(), romanMap.end());
    std::sort(romanVector.begin(), romanVector.end());
    
    std::string result;
    
    for (const auto& pair : romanVector) {
        while (num >= pair.first) {
            num -= pair.first;
            result.push_back(pair.second[0]);
        }
    }
    
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string result = int_to_mini_romank(num);
    std::cout << "Roman numeral representation: " << result << std::endl;
}