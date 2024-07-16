#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    if (!str.empty()) {
        words.push_back(str);
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += std::toupper(words[i][0]);
        else
            result += words[i];
        for (size_t j = 1; j < words[i].size(); ++j) {
            result += std::tolower(words[i][j]);
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}