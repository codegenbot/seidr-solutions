#include <bits/stdc++.h>

using namespace std;

string encrypt(string s) {
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c = (c - 'a' + 2) % 26 + 'a';
        } else if(c >= 'n' && c <= 'z'){
            c = (c - 'n' + 2) % 26 + 'n';
        }
        result += c;
    }
    return result;

}

int main() {
    string s = "";
    cout << "Enter a string: ";
    getline(cin, s); 
    cout << "Encrypted string: " << encrypt(s) << endl;
    return 0;