#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using string = std::basic_string<char>;

std::vector<string> words_string(string s){
    std::vector<string> words;
    std::stringstream ss(s);
    string word;
    while (std::getline(ss, word, ' ')) {
        if (word.find(',') != string::npos) {
            word.erase(std::remove(word.begin(), word.end(), ','), word.end());
        }
        words.push_back(word);
    }
    return words;
}

bool issame(std::vector<string> a, std::vector<string> b){
    return a == b;
}

int main() {
    assert(words_string("ahmed     , gamal") == std::vector<string>{"ahmed", "gamal"});
    return 0;
}