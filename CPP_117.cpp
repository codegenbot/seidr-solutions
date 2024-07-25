#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;

    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                word += c;
            } else {
                word += c;
                if (std::count_if(word.begin(), word.end(), [](char x) { return isalpha(x) && tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u'; }) == n) {
                    words.push_back(word);
                }
                word = "";
            }
        } else if (!word.empty()) {
            if (std::count_if(word.begin(), word.end(), [](char x) { return isalpha(x) && tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u'; }) == n) {
                words.push_back(word);
            }
            word = "";
        }
    }

    if (!word.empty() && std::count_if(word.begin(), word.end(), [](char x) { return isalpha(x) && tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u'; }) == n) {
        words.push_back(word);
    }

    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}