#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[0] != a[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(std::string s, std::vector<std::string> expected) {
    std::vector<std::string> result = {};
    for (int i = 0; i < s.size(); i++) {
        std::string temp = "";
        while (i < s.size() && s[i] != ' ') {
            temp += s[i];
            i++;
        }
        if (!temp.empty()) {
            if (!issame({temp}) || !std::count(expected.begin(), expected.end(), temp)) {
                return {};
            }
            result.push_back(temp);
        }
    }
    return result;

int main() {
    std::string str;
    std::vector<std::string> exp;
    
    std::cout << "Enter a string: ";
    std::cin >> str;
    
    std::cout << "Enter expected words (space separated): ";
    std::cin >> str;
    exp = {str.begin(), str.end()};
    
    std::vector<std::string> result = words_string(str, exp);
    
    if (!result.empty()) {
        for (const auto& word : result) {
            std::cout << word << std::endl;
        }
    } else {
        std::cout << "No matching words found." << std::endl;
    }
    
    return 0;
}