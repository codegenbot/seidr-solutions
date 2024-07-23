```cpp
#include <iostream>
#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        std::string word = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            word += s[j];
        }
        sort(word.begin(), word.end());
        result += word;
        i += word.length() - 1;
    }
    return result;
}

int main() {
    std::string s = "Hi. My name is Mister Robot. How are you?";
    std::cout << anti_shuffle(s) << std::endl;
    return 0;
}