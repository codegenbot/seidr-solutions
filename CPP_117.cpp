#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    while (iss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            c = tolower(c);
            if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    assert(issame(select_words("hello world", 3), {"world"}));
    assert(issame(select_words("a quick brown fox", 2), {"quick", "brown"}));
    assert(issame(select_words("jumped over the lazy dog", 4), {"jumped", "lazy"}));
    return 0;
}