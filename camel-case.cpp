Here is the solution:

#include <string>
using namespace std;

string camelCase(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && isspace(s[i])) i++; // skip leading spaces
            if (!res.empty()) res += char(toupper(s[i])); // capitalize first letter of each word after first one
        } else if (!isspace(s[i]) || i == 0) {
            res += tolower(s[i]); // add lowercase letters
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}