```
#include <vector>
#include <string>
#include <initializer_list>

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
}

int main() {
    std::string str;
    std::vector<std::string> expect;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "Enter expected words (comma-separated): ";
    getline(cin, str);
    size_t start = 0;
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == ',') {
            expect.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }
    expect.push_back(str.substr(start));
    
    std::cout << "Words in string: ";
    for (const auto &word : words_string(str, expect)) {
        std::cout << word << " ";
    }
    std::cout << "\n";
}