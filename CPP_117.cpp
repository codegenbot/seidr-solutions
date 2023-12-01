#include <iostream>
#include <vector>
using namespace std;

bool isConsonant(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    int consonantCount = 0;
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isConsonant(s[i])) {
                consonantCount++;
            }
        } else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    vector<string> expected = {"b", "c", "d", "f"};
    vector<string> result = select_words("a b c d e f", 1);
    assert(result == expected);

    return 0;
}