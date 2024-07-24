#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    size_t pos = 0;
    
    while ((pos = s.find(" ")) != std::string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    
    if (!s.empty()) {
        words.push_back(s);
    }

    std::string result = "";
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::char_traits<char>::to_string(std::toupper(word[0]));
        } else {
            result += word;
        }
        for (size_t i = 1; i < word.size(); ++i) {
            result += std::char_traits<char>::to_string(std::tolower(word[i]));
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    
    return 0;
}