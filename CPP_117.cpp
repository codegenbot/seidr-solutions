#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> select_words(const std::string& str, int num) {
    std::vector<std::string> words;
    std::stringstream s(str);
    std::string word;

    for(int i=0; i<num && s >> word; ++i)
        words.push_back(word);

    return words;
}

bool is_same(char ch1, char ch2) {
    if (std::isalpha(ch1) && std::isalpha(ch2)) {
        return tolower(ch1) == tolower(ch2);
    } else {
        return false;
    }
}

bool are_words_the_same(std::vector<std::string> a, int b) {
    for(int i = 0; i < a.size(); i++) {
        if (!is_same(a[i][0], 'a')) {
            return false;
        }
    }
    return true;
}