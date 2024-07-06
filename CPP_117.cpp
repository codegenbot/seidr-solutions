```cpp
#include <vector>
#include <string>
#include <cctype>

// Define the select_words function
std::vector<std::string> select_words(const std::string& input, int count) {
    std::vector<std::string> result;
    bool wordFound = false;

    for (int i = 0; i < input.length(); ++i) {
        if (!wordFound && isalpha(input[i])) {
            wordFound = true;
            result.push_back("");
        }
        if (wordFound) {
            if (!isalpha(input[i])) {
                if (!issame(result.back().back(), input[i])) {
                    result.back() += input[i];
                    if (++result.size() > count) {
                        break;
                    }
                } else {
                    wordFound = false;
                    result.pop_back();
                }
            } else {
                result.back() += tolower(input[i]);
            }
        }
    }

    return result;
}

bool issame(char c1, char c2) {
    if (isalpha(c1) && isalpha(c2)) {
        return tolower(c1) == tolower(c2);
    } else {
        return c1 == c2;
    }
}