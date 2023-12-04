```
#include<iostream>
#include<string>

using namespace std;

string flip_case(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            result += tolower(str[i]);
        } else {
            result += toupper(str[i]);
        }
    }
    return result;
}
```