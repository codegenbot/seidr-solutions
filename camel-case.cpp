#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = {s};
    for (int i = 1; i < words.size(); ++i) {
        if (words[i].find('-') != std::string::npos) {
            words[i] = words[i].substr(1);
            words.insert(words.begin() + i, "");//insert a blank space
            break;
        }
    }
    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += words[i];
    }
    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::cout << kebabToCamel(s) << "\n";
    }
    return 0;
}