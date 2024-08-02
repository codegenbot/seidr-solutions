#include <iostream>
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            for (char c : s.substr(i)) {
                result += to_string(c)[0];
            }
            result += ' ';
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Ordered version of the sentence is: " << anti_shuffle(str) << endl;
    return 0;
}