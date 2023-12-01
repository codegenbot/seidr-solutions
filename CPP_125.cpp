#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split_words(string txt);

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

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (txt[i] == ',') {
            hasComma = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (!hasWhitespace && !hasComma) {
        int count = 0;
        for (int i = 0; i < word.length(); i++) {
            if (islower(word[i])) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    
    return 0;
}