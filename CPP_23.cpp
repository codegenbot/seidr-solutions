#include <iostream>
#include <string>
#include <unordered_set>

int countCharacters(std::string str) {
    std::unordered_set<char> charSet;
    for (char c : str) {
        charSet.insert(c);
    }
    return charSet.size();
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << countCharacters(str);
    return 0;
}