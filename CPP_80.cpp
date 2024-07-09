#include <iostream>
#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        string sub = s.substr(i, 3);
        for (char c : sub) {
            int count = 0;
            for (int j = i; j < i + 3 && j < s.length(); j++) {
                if (s[j] == c)
                    count++;
            }
            if (count > 1) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (is_happy(s))
        cout << "The string is happy.\n";
    else
        cout << "The string is not happy.\n";
    return 0;
}