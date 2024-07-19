#include <iostream>
#include <vector>

bool issame(std::vector<string> a, std::vector<string> b) {
    return a == b;
}

std::vector<string> select_words(std::string s, int n);

vector<string> select_words(string s, int n);

int main() {
    std::vector<std::string> result = select_words("Hello, world! Welcome to the code contest.", 2);
    
    for (const std::string& word : result) {
        cout << word << endl;
    }

    return 0;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    if (s.empty()) {
        return result;
    }

    std::string word;
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