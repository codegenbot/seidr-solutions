#include <iostream>
#include <algorithm>

using namespace std;

std::string solve(std::string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return !result.empty() ? result : string(s.rbegin(),s.end());
}

int main() {
    cout << "Enter a string: ";
    string s;  
    cin >> s;  // Replace getline with cin
    cout << solve(s) << endl;  
    return 0;
}