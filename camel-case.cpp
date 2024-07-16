#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] != ' ') i++;
            result += toupper(str[i]);
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) result += tolower(str[i]);
            else result += toupper(str[i]);
        }
    }
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << camelCase(str) << endl;
    }
    return 0;
}