#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cassert> // Add this line

using namespace std;

vector<string> select_words(const string& s, int n);

vector<string> select_words(const string& s, int n) {
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

    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});

    return 0;
}