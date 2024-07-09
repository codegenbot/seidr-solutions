#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && count(word.begin(), word.end(), tolower()) <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count(word.begin(), word.end(), tolower()) <= n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(vector<string>(select_words("a b c d e f", 1)), vector<string>("b", "c", "d", "f")));
    return 0;