#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

string solve(string s) {
    bool hasLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            break;
        }
    }

    if (!hasLetter) {
        reverse(s.begin(), s.end());
        return s;
    }

    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }
    return s;
}

int main() {
    string input;
    cin >> input;
    cout << solve(input) << endl;
    return 0;
}