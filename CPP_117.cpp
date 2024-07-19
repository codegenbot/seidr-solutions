// Define issame function
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

// Declare select_words function
vector<string> select_words(string s, int n);

#include <vector>
#include <string>
#include <cassert>

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            char lowercase_c = tolower(c);
            if (lowercase_c != 'a' && lowercase_c != 'e' && lowercase_c != 'i' && lowercase_c != 'o' && lowercase_c != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        words.push_back(word);
    }

    return words;
}

int main() {
    vector<string> result = select_words("sample input string", 2);
    vector<string> expected_result = {"sample", "input", "string"};
    
    assert(issame(result, expected_result));
    
    return 0;
}