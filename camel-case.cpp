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
            result += " ";
        } else if (s[i] != ' ') {
            result += tolower(s[i]);
        }
    }
    return result;
}

string s; 
char c;
while ((c = cin.get()) && c != '\n') {
    if (c == '-') {
        getline(cin, s);
        s += " ";
    } else {
        s += c;
    }
}
cout << camelCase(s) << endl;
return 0;