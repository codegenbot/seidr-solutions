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

bool same_chars(char ch1, char ch2) {
    if (std::isalpha(ch1) && std::isalpha(ch2)) {
        return std::tolower(ch1) == std::tolower(ch2);
    } else {
        return false;
    }
}

bool are_words_the_same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        bool equal = true;
        int j = 0;
        while(j < std::min(a[i].size(), b[i].size()) && equal) {
            if (!same_chars(std::tolower(a[i][j]), std::tolower(b[i][j])))
                equal = false;
            j++;
        }
        if (!equal)
            return false;
    }
    return true;
}