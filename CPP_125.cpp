```
#include <vector>
#include <string>
#include <cctype>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) { return a == b; }

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    bool inWord = false;
    std::string word = "";

    for (char c : txt) {
        if (!inWord && !isalpha(c)) { 
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !isalpha(c)) { 
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
    bool b;
    assert(issame(std::vector<std::string>({""}), std::vector<std::string>({"0"})));
}