#include <iostream>
#include <string>

int countCharacters(std::string str) {
    int uniqueChars = 0;
    const int MAX_CHAR = 256; // Assuming ASCII characters

    bool chars[MAX_CHAR] = {false};

    for (char c : str) {
        if (!chars[c]) {
            uniqueChars++;
            chars[c] = true;
        }
    }

    return uniqueChars;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << countCharacters(str);

    return 0;
}