```
#include <vector>
#include <algorithm>
#include <array> 
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    int wordCount = 0;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
                    count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
                if (vowelCount <= n) {
                    result.push_back(word);
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
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    vector<string> expected = {"b", "c", "d", "f"};
    vector<string> output = select_words("a b c d e f", 1);
    assert(issame(output, expected));
    return 0;
}