#include <string>
#include <vector>

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        int oddLowercaseCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 != 0) {
                oddLowercaseCount++;
            }
        }
        result.push_back(to_string(oddLowercaseCount));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));

    return 0;
}