Here is the solution:

#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (i > 0 && !result.empty()) {
                result.push_back(char(toupper(s[i+1])));
                i++;
            } else {
                continue;
            }
        } else if (s[i] == ' ') {
            result.append(" ");
            while (s[i+1] == '-') {
                i++;
            }
        } else {
            if (result.empty()) {
                result += tolower(s[i]);
            } else {
                result.push_back(char(toupper(s[i])));
            }
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string in kebab-case: ";
    getline(cin, s);
    cout << kebabToCamel(s) << endl;
    return 0;
}