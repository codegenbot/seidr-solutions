Here is the solution:

#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] == ' ') {
                i++;
            }
            if (result != "") {
                result += std::string(1, char(toupper(s[i])));
            } else {
                result = std::string(1, char(toupper(s[i])));
            }
        } else if (s[i] == ' ') {
            while (i < s.size() && s[i] == ' ') {
                i++;
            }
            if (!result.empty()) {
                result += std::string(1, char(toupper(s[i-1])));
            } else {
                result = " ";
            }
        } else {
            if (result.empty()) {
                result = std::string(1, char(tolower(s[i])));
            } else {
                result += std::string(1, char(tolower(s[i])));
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}