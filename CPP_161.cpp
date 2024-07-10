#include <iostream>
#include <string>

int solve(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

cout << "Enter a string: ";
std::string s;
getline(cin, s);
cout << solve(s) << endl;