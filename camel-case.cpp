#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (i > 0 && result.back() != ' ') {
                result += char(toupper(s[i+1]));
                i++;
            }
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result.push_back(char(toupper(s[i+1])));
                i++;
            }
        } else {
            if (i > 0 && (s[i-1] == '-' || s[i-1] == ' ')) {
                result += char(toupper(s[i]));
            } else {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}