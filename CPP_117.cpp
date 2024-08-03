#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else {
            bool is_consonant = false;
            for (char letter : {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"}) {
                if (tolower(c) == tolower(letter)) {
                    is_consonant = true;
                    break;
                }
            }
            if (!is_consonant && c != ' ') {
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
    // Test the function
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> words = select_words(s, n);

    for (const auto& word : words) {
        cout << word << endl;
    }

    return 0;
}