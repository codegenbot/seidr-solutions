#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string reverseTemp = temp;
    reverse(reverseTemp.begin(), reverseTemp.end());
    result.push_back(to_string(temp == reverseTemp));
    return result;
}

int main() {
    string str, charSet;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter a character set: ";
    cin >> charSet;
    vector<string> output = reverse_delete(str, charSet);
    if (isSame({str}, output)) {
        cout << "The original string is the same as the reversed one.\n";
    } else {
        cout << "The original string is not the same as the reversed one.\n";
    }
    return 0;
}