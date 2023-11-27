#include <iostream>
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string orderedString = "";
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            std::sort(word.begin(), word.end());
            orderedString += word + " ";
            word = "";
        }
    }
    std::sort(word.begin(), word.end());
    orderedString += word;
    return orderedString;
}