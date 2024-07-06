#include <algorithm>
#include <iostream>
#include <string>

std::string min_char(const std::string& str) {
    auto it = std::min_element(str.begin(), str.end());
    return *it;
}

std::string anti_shuffle(std::string s) {
    if (s.empty()) {
        return s;
    }

    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word = "";
            bool first = true;
            for (int j = i; j < s.size() && s[j] != ' '; j++) {
                if (first) {
                    first = false;
                } else {
                    word += s[j];
                }
            }
            result += min_char(word);
            i += word.size() - 1;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Anti-shuffled string is: " << anti_shuffle(str) << std::endl;
    return 0;
}