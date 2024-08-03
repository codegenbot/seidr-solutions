#include <string>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.size() == 1 && words[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos) {
        int oddCount = 0;
        for (char c : words[0]) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        words[0] = to_string(oddCount);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Correct the issame call
    vector<string> v1 = {"apple", "banana", "cherry"};
    vector<string> v2 = {"apple", "banana", "cherry"};

    if (issame(v1, v2)) {
        // Do something
    }

    return 0;
}