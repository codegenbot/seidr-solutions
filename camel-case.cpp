#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool first = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char toupper(c);
            } else {
                first = false;
            }
        } else if (c == ' ') {
            continue;
        } else {
            if (!first) {
                result += char tolower(c);
            } else {
                result += c;
                first = false;
            }
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