#include <iostream>
#include <string>
#include <unordered_set>

int countCharacters(std::string str) {
    std::unordered_set<char> uniqueChars;

    for (char c : str) {
        uniqueChars.insert(c);
    }

    return uniqueChars.size();
} 

int main() {
    std::string str;
    std::cin >> str;
    std::cout << countCharacters(str);
    return 0;
}