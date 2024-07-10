```cpp
#include <iostream>
#include <cctype>
using namespace std;

int solve(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s.length();
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int result = solve(str);
    cout << "Length of the converted string is: " << result << endl;
    return 0;
}