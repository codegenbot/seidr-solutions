```cpp
#include <vector>
#include <string>
#include <cctype>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) {
        return result;
    }

    pos = txt.find(',');
    if (pos == string::npos) {
        int oddCount = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int(c) - int('a')) % 2 != 0) {
                    oddCount++;
                }
            }
        }
        result.push_back(to_string(oddCount));
    } else {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }

    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
}