```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (i == 0 || s[i] == '-') {
            if (s[i + 1] != ' ') {
                if (!result.empty()) {
                    result[0] = toupper(result[0]);
                }
                string word = s.substr(i + 1);
                result += word;
            } else {
                int j = i + 1;
                while (j < s.size() && s[j] == ' ') {
                    j++;
                }
                if (!result.empty()) {
                    result[0] = toupper(result[0]);
                }
                string word = s.substr(i + 1, j - i - 1);
                result += word;
                i = j;
            }
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}