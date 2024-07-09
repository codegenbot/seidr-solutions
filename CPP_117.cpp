#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<pair<int, string>> a, vector<pair<int, string>> b) {
    return all_of(a.begin(), a.end(), [&](auto p) { return find(b.begin(), b.end(), p) != b.end(); });
}

vector<pair<int, string>> select_words(string s, int n) {
    vector<pair<int, string>> result;
    int wordCount = 0;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
                    count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
                if (vowelCount <= n) {
                    result.push_back({vowelCount, word});
                }
                word = "";
            }
            wordCount++;
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        int vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
            count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
        if (vowelCount <= n) {
            result.push_back({vowelCount, word});
        }
    }
    return result;
}

int main() {
    vector<pair<int, string>> result = select_words("a b c d e f", 1);
    assert(result == {{1, "b"}, {1, "c"}, {1, "d"}, {1, "f"}});
    return 0;
}