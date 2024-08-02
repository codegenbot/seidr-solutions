#include <vector>
#include <string>
#include <algorithm>
#include <cctype> // for isalpha function

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> select_words(std::string s, int n);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c) && std::find_if("aeiouAEIOU", "aeiouAEIOU"+10, [c](char v) { return std::toupper(c) == v; }) == "aeiouAEIOU"+10) {
            consonant_count++;
        }
        word += c;
    }

    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }

    return result;
}