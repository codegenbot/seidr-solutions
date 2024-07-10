#include <vector>
#include <string>
#include <cctype>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

    for (char c : txt) {
        if (!inWord && !isalnum(c)) {
            // Check for commas
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !std::isalnum(c)) {
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
    assert(issame(split_words(""), vector<string> {"0"}));
}