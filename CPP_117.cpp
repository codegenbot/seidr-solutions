```cpp
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isvowel(ch)) {
                    consonants++;
                }
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main() {
    assert (issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    
}