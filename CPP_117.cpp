#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && (count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u')) <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && (count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u')) <= n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(vector<string>(select_words("a b c d e f", 1)), vector<string> {"b", "c", "d", "f"}));
}