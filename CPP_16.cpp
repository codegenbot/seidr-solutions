```cpp
#include <cctype>
#include <cstring>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int result = count_distinct_characters(str);
    return 0;
}

int count_distinct_characters(std::string str) {
    int count = 0;
    bool seen[256] = {false}; // assume ASCII

    for (char c : str) {
        if (std::isalpha(c)) {
            char ch = tolower(c);
            if (!seen[ch]) {
                seen[ch] = true;
                count++;
            }
        }
    }

    return count;