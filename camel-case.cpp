#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    for (const auto& word : s.split(" ")) {
        words.push_back(word);
    }

    std::string result = "";
    for (const auto& word : words) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word;
    }

    return result;
}

int main() {
    int numCases;
    cin >> numCases;

    while (numCases--) {
        std::string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }

    return 0;
}