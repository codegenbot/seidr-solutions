#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    // code for comparing two vectors
}

vector<string> select_words(string s, int n);

int count_consonants(string word) {
    // code for counting consonants in a word
}

bool is_consonant(char c) {
    // code for checking if a character is a consonant
}

int main() {
    // code for testing the select_words() function
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                words.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (!word.empty() && count_consonants(word) == n) {
        words.push_back(word);
    }
    return words;
}