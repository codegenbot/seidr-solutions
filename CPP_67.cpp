#include <iostream>
#include <string>

int fruit_distribution(std::string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    // Parse the string to extract the number of apples and oranges
    size_t applePos = s.find("apples");
    size_t orangePos = s.find("oranges");
    
    if (applePos != std::string::npos) {
        std::string appleCount = s.substr(0, applePos);
        apples = std::stoi(appleCount);
    }
    
    if (orangePos != std::string::npos) {
        std::string orangeCount = s.substr(applePos + 7, orangePos - applePos - 7);
        oranges = std::stoi(orangeCount);
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}