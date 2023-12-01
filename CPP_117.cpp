#include <iostream>
#include <vector>

bool isConsonant(char c) {
    // Implement the logic of checking if a character is a consonant.
    // Return true if it is a consonant, false otherwise.
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

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
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});
    // Write other test cases to verify the correctness of the select_words function.

    return 0;
}