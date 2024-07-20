#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::string temp;
    for (char c : str) {
        if (c == '-') {
            words.push_back(temp);
            temp = "";
        } else if (c == ' ') {
            if (!temp.empty()) {
                words.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    if (!temp.empty()) {
        words.push_back(temp);
    }

    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
            result += words[i].substr(1).c_str();
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        cin >> str;
        cout << kebabToCamel(str) << endl;
    }
    return 0;
}