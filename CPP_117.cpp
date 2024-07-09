#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cctype>
#include <algorithm>

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
            if (std::find(std::begin("aeiou"), std::end("aeiou"), tolower(c)) == std::end("aeiou")) {
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
    
    // Add more test cases here
    
    return 0;
}