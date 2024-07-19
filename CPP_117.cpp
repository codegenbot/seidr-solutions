#include <vector>
#include <string>

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

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                unsigned vowel_count = 0;
                for (char ch : word) {
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                        vowel_count++;
                }
                if (vowel_count <= n) {
                    result.push_back(word);
                    word = "";
                }
            }
        } else {
            word += c;
        }
    }
    if (!word.empty() && word.find_first_of("aeiouAEIOU") != string::npos &&
        (word.length() - 1 - word.find_first_of("aeiouAEIOU")) <= n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    vector<string> words = select_words("a b c d e f", 1);
    assert(issame(words, {"b", "c", "d", "f"}));
}