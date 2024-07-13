```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) { 
        if (i == s.size() - 1 || s[i] == '-') { 
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + 1);
            result += word;
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            result += s.substr(i + 1).substr(0, 1);
            for(int j = 1; j < s.substr(i + 1).size(); j++) {
                result += tolower(s.substr(i + 1)[j]);
            }
            break;
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
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