```cpp
#include <cctype>
#include <cstring>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    while (std::cin.peek() == '\n') 
        std::cin.ignore();
    char buffer[256]; // or any size that fits your needs
    std::cin.getline(buffer, 256); // use buffer and size accordingly
    str = std::string(buffer); // assign the C-style string to your std::string
    int result = count_distinct_characters(str);
    return 0;
}

int count_distinct_characters(const std::string& str) {
    bool seen[256] = {false}; // assume ASCII

    for (int i = 0; i < str.length(); ++i) {
        char c = tolower(str[i]);
        if (!std::isalpha(c)) {
            continue; // ignore non-alphabets
        }
        if (!seen[c]) {
            seen[c] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < 256; ++i) {
        if (seen[i]) {
            ++count;
        }
    }

    return count;
}