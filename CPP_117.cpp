#include <vector>
#include <cassert>

int count_consonants(std::string word);
bool is_consonant(char c);
std::vector<std::string> select_words(std::string s, int n);
bool issame(std::vector<std::string> a, std::vector<std::string> b);

int count_consonants(std::string word) {
    int count = 0;
    for (char c : word) {
        if (is_consonant(c)) {
            count++;
        }
    }
    return count;
}

bool is_consonant(char c) {
    c = tolower(c);
    return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'h') ||
           (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 't') ||
           (c >= 'v' && c <= 'z');
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    if (s.empty()) {
        return result;
    }
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}