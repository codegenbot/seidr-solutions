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
            result += toupper(str[i]);
        } else if (str[i] == ' ') {
            if (!result.empty()) {
                result[0] = tolower(str[++i]);
            } else {
                result += tolower(str[i]);
            }
        } else {
            if (!result.empty()) {
                result[0] = tolower(str[i]);
            } else {
                result += tolower(str[i]);
            }
            i++;
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