#include <string>
#include <vector>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool isWhitespacePresent = false;
    bool isCommaPresent = false;
    
    for (char c : txt) {
        if (isspace(c)) {
            isWhitespacePresent = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            isCommaPresent = true;
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
    
    if (!isWhitespacePresent && !isCommaPresent) {
        result.clear();
        result.push_back(to_string(countOddLetters(txt)));
    }
    
    return result;
}

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

int main() {
    assert(issame(split_words(""), {"0"}));
    // Add more test cases here
    
    return 0;
}