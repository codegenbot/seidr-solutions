#include <iostream>
#include <string>
#include <set>

int distinctCharacterCount(const std::string& str) {
    std::set<char> distinctChars(str.begin(), str.end());
    return distinctChars.size();
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    while ((std::cin >> std::ws).peek() == '\n') 
        std::cin.ignore();
    char buffer[256];
    std::cin.getline(buffer, 256); 
    str = std::string(buffer);
    int result = distinctCharacterCount(str);
    std::cout << "Number of distinct characters: " << result << std::endl;
    return 0;
}