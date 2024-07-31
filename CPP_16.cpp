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

int count_distinct_characters(const std::string& str) {
    bool seen[256] = {false}; // assume ASCII

    for (char c : str) {
        if (!std::isalpha(c)) {
            continue; // ignore non-alphabets
        }
        char ch = tolower(c);
        if (!seen[ch]) {
            seen[ch] = true;
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