#include <algorithm>
#include <iostream>
using namespace std;

std::string anti_shuffle(std::string s) { 
    string result = "";
    string word;
    
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            result += word;
            word.clear();
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        sort(word.begin(), word.end());
        result += word;
    }
    
    return result;
}