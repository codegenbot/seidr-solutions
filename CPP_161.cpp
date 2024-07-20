#include <iostream>
#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
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
    getline(cin, s);
    cout << "Resulted string: " << solve(s) << endl;
    return 0;
}