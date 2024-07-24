#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.length() && str[i] == '-') {
                i++;
            }
            if (i < str.length()) {
                result += std::string(1, toupper(str[i])).substr(0, 1);
                i--; // back to the last letter of the word
            } else break;
        } else if (str[i] != ' ') {
            if (!result.empty() && isalpha(result.back())) {
                result.push_back(tolower(str[i]));
            } else {
                result += std::string(1, tolower(str[i])).substr(0, 1);
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}