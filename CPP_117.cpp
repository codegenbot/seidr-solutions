#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> select_words(std::string s, int n){
    std::vector<std::string> result;
    std::string word = "";
    int count = 0;
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                count++;
            }
            word += c;
        }
    }
    if (count == n) {
        result.push_back(word);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main(){
    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    return 0;
}