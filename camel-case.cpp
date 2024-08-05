#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            capitalizeNext = true;
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (capitalizeNext) {
                result += toupper(str[i]);
                capitalizeNext = false;
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