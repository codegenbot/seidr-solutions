```cpp
#include <iostream>
using namespace std;

const char* anti_shuffle(const string& str) {
    if (str.length() < 2) {
        return str.c_str();
    }
    int i = 1;
    while (i < str.length()) {
        if (str[i] == str[0]) {
            return NULL; 
        }
        i++;
    }
    return str.c_str();
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    const char* res = anti_shuffle(str);
    cout << "Result: " << res << endl;
    return 0;
}