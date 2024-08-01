#include <cctype>
#include <string>

std::string ispunct(const std::string& word) {
    for (int i = 0; i < word.size(); ++i) {
        if (!std::isalnum(word[i])) return &word[i];
    }
    return "";
}

char* myFunction(char* word, int j) {
    if (*ispunct(word)) return *ispunct(word);
    return word;
}