```
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string encode(string message) {
    string encoded = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (isupper(c)) {
            encoded += tolower(c);
        } else if (islower(c)) {
            encoded += toupper(c);
        } else {
            encoded += c;
        }
    }
    return encoded;
}
```