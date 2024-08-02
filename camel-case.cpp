Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            result += ' ';
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (result.length() > 0) {
                result[0] = tolower(result[0]);
            }
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    cin >> input;
    cout << camelCase(input) << endl;
    return 0;
}