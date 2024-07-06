#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> select_words(const std::string& s, int n) {
    // Split the string into words based on spaces and store them in a vector
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;

    while (std::getline(ss, word, ' ')) {
        words.push_back(word);
    }

    return words.substr(0, n); // Return the first n words
}

bool issame(char c1, char c2) {
    if (isalpha(c1) && isalpha(c2)) {
        return tolower(c1) == tolower(c2);
    } else {
        return c1 == c2;
    }
}

int main() {
    assert(issame(select_words("a b c d e f", 3)[0][0], "b c d e f"[0][0]));
}