#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    bool firstWord = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] == ' ') {
                i++;
            }
            if (!firstWord) {
                result[0] = tolower(str[i]);
            } else {
                result += toupper(str[i]);
                firstWord = false;
            }
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (!firstWord) {
                result[0] = tolower(str[i]);
            } else {
                result += toupper(str[i]);
                firstWord = false;
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cin >> str;
        getline(cin, str);
        cout << toCamelCase(str) << endl;
    }
    return 0;
}