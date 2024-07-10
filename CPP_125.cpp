#include <vector>
#include <string>
#include <cctype>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) { return a == b; }

std::vector<std::string> splitWords(std::string txt) {
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
    std::vector<std::string> a = {};
    assert(isSame(a, {""}));
}