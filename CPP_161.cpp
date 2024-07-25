```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Output String: " << solve(s) << endl;
    return 0;
}

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'A' && c <= 'Z') {
                c = tolower(c);
            }
        } else {
            c = tolower(c);
        }
        result += c;
    }
    reverse(result.begin(), result.end());
    return result;
}