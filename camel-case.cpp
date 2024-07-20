#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = {s};
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].find('-') != std::string::npos) {
            std::string newWord;
            int j = 1;
            while (j <= words[i].size()) {
                if (j == 1 || (j > 0 && words[i][j-1] >= 'A' && words[i][j-1] <= 'Z') || 
                    (j > 0 && words[i][j-1] >= 'a' && words[i][j-1] <= 'z')) {
                    newWord += topper(words[i][j-1]);
                } else if (j == words[i].size() || (j < words[i].size() && 
                    (words[i][j-1] < 'A' || words[i][j-1] > 'Z') && 
                    (words[i][j-1] < 'a' || words[i][j-1] > 'z'))) {
                    newWord += topper(words[i][j-1]);
                    break;
                } else {
                    if (newWord.size() > 0) {
                        newWord += " ";
                    }
                    for (; j <= words[i].size(); ++j) {
                        if (words[i][j] != '-') {
                            ++j;
                            break;
                        }
                    }
                    j -= 1;
                }
            }
            words[i] = newWord;
        }
    }
    std::string result;
    bool first = true;
    for (const auto& word : words) {
        if (!first) {
            result += " ";
        } else {
            first = false;
        }
        result += topper(word[0]);
        for (int j = 1; j < word.size(); ++j) {
            result += word[j];
        }
    }
    return result;
}

char topper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}