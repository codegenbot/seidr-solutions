#include <vector>
#include <iostream>
#include <string>

using namespace std;

void camelCase(string str) {
    string temp = "";
    for (char c : str) {
        if (c == '-') {
            temp += char(toupper(c + 1));
        } else if (!temp.empty() && c == ' ') {
            temp[0] = toupper(temp[0]);
            temp += string(1, c);
        } else {
            temp += c;
        }
    }
    cout << temp << endl;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin.ignore();
        getline(cin, str);
        camelCase(str);
    }
    return 0;
}