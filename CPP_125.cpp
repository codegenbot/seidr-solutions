#include <string>

bool issame(char c1, char c2) {
    return tolower(c1) == tolower(c2);
}

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
        int oddLowerCaseCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddLowerCaseCount++;
            }
        }
        result.push_back(to_string(oddLowerCaseCount));
    }
    return result;
}