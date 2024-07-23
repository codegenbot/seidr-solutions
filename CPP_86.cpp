#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

std::string anti_shuffle(std::string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            word += s[j];
        }
        sort(word.begin(), word.end());
        while (!word.empty()) {
            result += word[0];
            word.erase(0, 1);
        }
        i += word.length();
    }
    return result;
}