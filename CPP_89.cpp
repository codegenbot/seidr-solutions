```
#include<iostream>
#include<string>
using namespace std;
string encrypt(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        int pos = c - 'a';
        if (pos >= 0 && pos <= 25) {
            pos += 2;
            while (pos > 25) {
                pos -= 26;
            }
            result += (char)(pos + 'a');
        } else {
            result += c;
        }
    }
    return result;
}
int main() {
    string s = "hello world";
    cout << encrypt(s) << endl;
    return 0;
}
```