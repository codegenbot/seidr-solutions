Here is the solution:

#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            for (++i; i < s.size() && s[i] == '-'; i++);
            if (i < s.size()) {
                char c = toppercase(s[i]);
                result += c;
            }
        } else if (s[i] != ' ') {
            char c = toppercase(s[i]);
            result += c;
        }
    }
    return result;
}

char toppercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return (char)(c - 32);
    } else {
        return c;
    }
}
int main() {
    // Read input from user
    string s;
    cin >> s;

    // Convert to camelCase
    string result = camelCase(s);

    // Print output
    cout << result << endl;
}