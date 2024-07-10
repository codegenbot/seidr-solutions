#include <vector>
#include <string>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b) -> bool { return a == b; }

std::vector<std::string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

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
    assert(issame(split_words(""), std::vector<string>({""})));