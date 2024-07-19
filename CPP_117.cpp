#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::vector<std::string> result = select_words("Hello, world! Welcome to the code contest.", 2);
    
    for (const std::string& word : result) {
        cout << word << endl;
    }

    assert (issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    
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