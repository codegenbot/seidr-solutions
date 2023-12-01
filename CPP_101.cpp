#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

int main() {
    // Test cases
    vector<string> a = words_string("Hello, World");
    vector<string> b = words_string("Hello World");
    assert(issame(a, b));

    a = words_string("This is a test");
    b = words_string("This is just a test");
    assert(!issame(a, b));

    return 0;
}