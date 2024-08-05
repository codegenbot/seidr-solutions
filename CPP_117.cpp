#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> select_words(string words, int index) {
    vector<string> selected_words;
    string word = "";
    for (char c : words) {
        if (c == ' ') {
            if (!word.empty()) {
                if (index != 0) {
                    --index;
                } else {
                    selected_words.push_back(word);
                }
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        selected_words.push_back(word);
    }

    return selected_words;
}

assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));
return 0;