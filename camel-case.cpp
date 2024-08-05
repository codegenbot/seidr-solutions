#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    bool convertNext = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            convertNext = true;
        } else if (convertNext) {
            result += toupper(str[i]);
            convertNext = false;
        } else {
            result += tolower(str[i]);
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