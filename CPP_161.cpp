#include <iostream>
#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'
                ? toupper(c)
                : tolower(c);
        } else {
            result += c;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Resulted string: " << solve(s) << endl;
    return 0;
}