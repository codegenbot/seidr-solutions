#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '-') {
            ++i;
            while (i < str.size() && str[i] == ' ') {
                ++i;
            }
            result += std::toupper(str[i]);
        } else if (str[i] != ' ') {
            if (!result.empty()) {
                result += std::tolower(str[i]);
            } else {
                result += std::toupper(str[i]);
            }
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}