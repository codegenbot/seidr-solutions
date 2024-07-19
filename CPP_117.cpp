#include <iostream>
#include <vector>
#include <cctype>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

int main() {
    // Sample test case
    string input = "hello world";
    int n = 2;
    vector<string> result = select_words(input, n);
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;

    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));

    return 0;
}

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
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}