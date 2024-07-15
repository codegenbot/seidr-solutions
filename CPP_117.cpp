#include <vector>
#include <string>
#include <cassert>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (std::isalpha(c)) {
            if (std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && std::tolower(c) != 'o' && std::tolower(c) != 'u') {
                consonants++;
            }
            word += c;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    std::vector<std::string> expected = {"b", "c", "d", "f"};
    std::vector<std::string> result = select_words("a b c d e f", 1);
    assert(issame(result, expected));
    return 0;
}