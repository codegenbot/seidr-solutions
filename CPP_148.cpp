```cpp
#include <iostream>
#include <string>

using namespace std;

bool issame(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i = 0; i < a.length(); i++) {
        if (tolower(a[i]) != tolower(b[i])) {
            return false;
        }
    }
    return true;
}

{
    int num;
    cin >> num;
    char str1[100], str2[100]; 
    for (int i = 0; i < num; i++) {
        cin >> str1 >> str2; 
        if (issame(str1, string(str1)) && issame(string(str2), str2)) {
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
}