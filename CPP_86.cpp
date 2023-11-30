#include <iostream>
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string orderedString = "";
    std::string word = "";
    
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.begin(), word.end());
            orderedString += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    
    std::sort(word.begin(), word.end());
    orderedString += word;
    
    return orderedString;
}