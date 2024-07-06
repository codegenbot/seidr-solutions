#include <vector>
#include <string>
#include <sstream>
#include <cctype>

std::vector<std::string> select_words(const std::string& str, int num) {
    std::vector<std::string> words;
    std::stringstream s(str);
    std::string word;

    for(int i=0; i<num && s >> word; ++i)
        words.push_back(word);

    return words;
}

bool is_same(char ch1, char ch2) {
    if (isalpha(ch1) && isalpha(ch2)) {
        return tolower(ch1) == tolower(ch2);
    } else {
        return false;
    }
}

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        for (char c : a[i]) {
            if (!is_same(c, b[i][0])) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::string> b = select_words("a b c d e f", 6);
    assert(issame(std::vector<std::string>(), b));
    return 0;
}