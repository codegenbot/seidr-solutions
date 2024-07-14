#include <iostream>
#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (i > 0 && str[i - 1] != ' ')
                result += topper(str.substr(i + 1));
            else
                result += " ";
        } else if (str[i] == ' ') {
            if (!result.empty())
                result += topper(str.substr(i + 1));
            else
                result = str.substr(0, i);
            break;
        } else
            result += tolower(str[i]);
    }
    return result;
}

string topper(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (i == 0)
            res += toupper(s[i]);
        else
            res += tolower(s[i]);
    }
    return res;
}

int main() {
    string str;
    while (cin >> str) {
        cout << camelCase(str) << endl;
    }
    return 0;
}