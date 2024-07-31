```cpp
#include <cctype>
#include <cstring>
#include <string>

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