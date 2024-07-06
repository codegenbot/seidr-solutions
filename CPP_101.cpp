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
    std::string s;
    std::vector<std::string> expected;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    
    int n;
    std::cout << "Enter number of expected words: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::string temp;
        std::cout << "Enter word " << i + 1 << ": ";
        std::getline(std::cin, temp);
        expected.push_back(temp);
    }
    
    std::vector<std::string> result = words_string(s, expected);
    
    if (!result.empty()) {
        std::cout << "Words in the string: ";
        for (auto word : result) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No matching words found." << std::endl;
    }
    
    return 0;
}