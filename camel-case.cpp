```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (i == 0 || s[i] == '-') {
            if (s[i + 1] != ' ') {
                char c = topper(s[i]);
                result += c;
                i++;
            } else {
                result += s[i];
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            char c = tolower(s[i]);
            result += c;
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