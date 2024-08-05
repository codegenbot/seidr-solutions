#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] == ' ') {
                i++;
            }
            if (result.length() > 0) {
                result[0] = tolower(str[i]);
            } else {
                result += toupper(str[i]);
            }
        } else if (str[i] == ' ') {
            if (result.length() > 0) {
                result[0] = tolower(str[i+1]);
            } else {
                result += toupper(str[i+1]);
            }
            i++;
            while (i < str.length() && str[i] == ' ') {
                i++;
            }
        } else {
            if (result.length() > 0) {
                result[0] = tolower(str[i]);
            } else {
                result += toupper(str[i]);
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