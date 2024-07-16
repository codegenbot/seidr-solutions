#include <vector>
#include <string>

bool issame(const vector<string>& txt) {
    vector<string> result;
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
    if (result.size() == 1 && islower(result[0][0])) {
        int oddCount = 0;
        for (char c : result[0]) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        result[0] = to_string(oddCount);
    }
    return result;
}

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(split_words(""), {"0"}));
}