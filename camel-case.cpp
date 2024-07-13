```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || (s[i] == '-' || s[i] == ' ') && (result.size() > 0)) {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i);
            if (!word.empty())
                result += word;
            break;
        } else {
            if ((s[i] == ' ') || i == s.size() - 1) {
                if (result.size()) {
                    result[0] = toupper(result[0]);
                }
                result += s.substr(i).substr(0, 1);
                word = s.substr(i + 1);
                if (!word.empty())
                    result += word;
                break;
            } else {
                result += s[i];
            }
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