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

(int main() {
    int num;
    cin >> num;
    string str1, str2;
    for (int i = 0; i < num; i++) {
        cin >> str1 >> str2;
        if (issame(str1, str2)) {
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
    
    return 0;
})