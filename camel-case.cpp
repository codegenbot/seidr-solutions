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
            int j = i + 1;
            while(j < s.size() && s[j] != '-') j++;
            result += s.substr(i + 1, j - i).substr(1);
            i = j;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while(j < s.size() && s[j] != '-') j++;
            string word = s.substr(i, j - i);
            result += word;
            i = j;
        } else {
            result += tolower(s[i]);
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