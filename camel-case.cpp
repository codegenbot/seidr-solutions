#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || i == s.size()) {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            if (i > 0) {
                string word = s.substr(0, i);
                if (word != "") 
                    result += word;
                if (s[i] == '-' || i == s.size())
                    return result;
                result += toupper(s[i+1]);
                for (int j = i + 2; j < s.size(); j++) {
                    result += tolower(s[j]);
                }
            } else {
                if (i > 0) 
                    result += toupper(s[i-1]);
                string word = s.substr(0, i);
                if (word != "") 
                    result += word;
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (result.empty()) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
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
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}