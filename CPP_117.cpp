#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using std::count;
using std::size_t;

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    int wordCount = 0;
    std::string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                size_t vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
                    count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
                if (vowelCount <= n) {
                    result.push_back(word);
                }
                word = "";
            }
            wordCount++;
        } else {
            word += tolower(c);
        }
    }
    if (!word.empty()) {
        size_t vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
            count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
        if (vowelCount <= n) {
            result.push_back(word);
        }
    }
    return result;
}