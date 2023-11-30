#include <string>
#include <vector>
#include <cassert>

using namespace std;

int countOddLetters(string txt) {
    int count = 0;
    for (char c : txt) {
        if (islower(c)) {
            int letterOrder = c - 'a';
            if (letterOrder % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (char c : txt) {
        if (isspace(c)) {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            hasComma = true;
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
    
    if (!hasWhitespace && !hasComma) {
        result.clear();
        result.push_back(to_string(countOddLetters(txt)));
    }
    
    return result;
}

bool issame(vector<string>& a, vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    // Additional test cases...

    return 0;
}