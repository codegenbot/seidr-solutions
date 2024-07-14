#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (i > 0 && result.length() > 0) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + (s[i] == '-' ? 1 : 0));
            result += word;
        } else if (s[i] != '-') {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    // Read input from user
    string s;
    cin >> s;

    // Convert kebab-case to camelCase and print the output
    cout << camelCase(s) << endl;

    return 0;
}