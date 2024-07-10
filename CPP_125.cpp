```c++
#include <vector>
#include <string>
#include <cctype>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    bool inWord = false;
    std::string word = "";

    for (char c : txt) {
        if (!inWord && !std::isalpha(c)) { 
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !std::isalpha(c)) { 
            result.push_back(word);
            word = "";
            inWord = false;
        } else {
            word += c;
        }
    }

    if (inWord) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(split_words("") == std::vector<std::string>({"",}));