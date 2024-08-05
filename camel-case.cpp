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
            i++;
            continue;
        } else {
            if (result.length() > 0) {
                result[0] = tolower(str[i]);
            } else {
                result += tolower(str[i]);
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