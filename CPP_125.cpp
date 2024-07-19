#include <string>
#include <vector>

vector<string> result;

bool issame(const string& a, const string& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> split_text(const string& txt) {
    if (txt.empty()) {
        return result;
    }

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
        int oddCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }

    return result;
}