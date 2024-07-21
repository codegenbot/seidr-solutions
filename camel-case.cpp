#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            result += toupper(str[++i]);
        } else if (!result.empty() && islower(str[i])) {
            result += toupper(str[i]) + tolower(str[i+1]);
            i++;
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    return 0;
}