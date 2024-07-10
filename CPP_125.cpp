#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool same(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

    for (char c : txt) {
        if (!inWord && !isalpha(c)) { 
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !isalpha(c)) { 
            result.push_back(word);
            word = "";
            inWord = false;
        } else {
            word += c;
        }
    }

    if (inWord) {
        result.push_back(word);
    }
    return result;
}

int test() {
    bool b = true;
    assert(same(split_words(""), vector<string>({""})));
    return 0;
}