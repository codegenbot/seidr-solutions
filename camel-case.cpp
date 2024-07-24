Here is the completed code:

#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
        } else if (!result.empty()) {
            result[0] = tolower(result[0]);
            result.insert(0, 1);
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}