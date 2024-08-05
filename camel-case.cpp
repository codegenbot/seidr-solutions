#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    bool inWord = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            inWord = true;
        } else if (str[i] == ' ') {
            inWord = false;
        } else {
            if (inWord) {
                result += toupper(str[i]);
            } else {
                if (result.length() > 0) {
                    result[0] = tolower(str[i]);
                } else {
                    result += tolower(str[i]);
                }
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