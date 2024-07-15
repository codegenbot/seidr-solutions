#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::string sort_numbers(std::string numbers);

std::string sort_numbers(std::string numbers) {
    std::string result = "";
    std::map<int, std::string> reverse_map;
    
    size_t pos = 0;
    std::string token;
    while ((pos = numbers.find(" ")) != std::string::npos) {
        token = numbers.substr(0, pos);
        reverse_map[number_map[token]] = token;
        numbers.erase(0, pos + 1);
    }
    
    reverse_map[number_map[numbers]] = numbers;
    
    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    // Main function implementation
}