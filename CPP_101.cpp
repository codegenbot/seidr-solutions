#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    string word;
    bool last_was_delim = true;  // handle cases with leading delimiters properly
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
            last_was_delim = true;
        } else {
            word += c;
            last_was_delim = false;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    assert(issame(words_string(",ahmed , gamal   ,"), {"ahmed", "gamal"}));  // additional test cases
    assert(issame(words_string("    , , word1,word2      "), {"word1", "word2"}));  // additional test cases
    cout << "All tests passed!" << endl;
    return 0;
}