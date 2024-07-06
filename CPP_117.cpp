```cpp
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

bool are_words_the_same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        for(int j=0;j<a[i].size()&&j<b[i].size();++j) {
            if (!isalpha(a[i][j]) && !isalpha(b[i][j])) {
                continue;
            }
            if (std::tolower(a[i][j]) != std::tolower(b[i][j]))
                return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> words = select_words("a b c d e f", 1);
    std::vector<std::string> ref = {"b", "c", "d", "f"};
    assert(are_words_the_same(words, ref));
    return 0;
}