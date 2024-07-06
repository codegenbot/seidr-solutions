```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> select_words(std::vector<std::string>, std::vector<bool>);
bool issame(char, char);

std::vector<std::string> select_words(std::vector<std::string> word_list, std::vector<bool> is_word) {
    std::vector<std::string> result;
    
    for (int i = 0; i < word_list.size(); i++) {
        if (is_word[i]) {
            result.push_back(word_list[i]);
        }
    }
    
    return result;
}

bool issame(char ch1, char ch2) {
    if (isalpha(ch1) && isalpha(ch2)) {
        return tolower(ch1) == tolower(ch2);
    } else {
        return false;
    }
}