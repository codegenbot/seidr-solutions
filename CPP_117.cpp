#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});
    cout << "Test passed!" << endl;
    return 0;
}