#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            int j = i + 1;
            while (j < s.size() && s[j] == '-') {
                j++;
            }
            string word = s.substr(i, j - i);
            result += word;
            i = j;
        } else if (s[i] != ' ') {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "The camelCase conversion is: " << camelCase(input) << endl;
    return 0;
}