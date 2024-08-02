#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size() > 0) {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while (j < s.size() && s[j] != '-') {
                result += tolower(s[j]);
                j++;
            }
            result += " ";
        } else if (s[i] == ' ') {
            continue;
        } else {
            result += tolower(s[i]);
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    string s;
    while (true) {
        cout << "input: ";
        cin >> s;
        cout << "output: " << kebabToCamel(s) << endl;
    }
    return 0;
}