```cpp
#include <iostream>
#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    bool inWord = false;
    
    for (char c : str) {
        if (c == '-') {
            result += ' ';
            inWord = true;
        } else if (inWord) {
            result += toupper(c);
            inWord = false;
        } else {
            result += tolower(c);
        }
    }
    
    // Remove leading space
    if (!result.empty()) {
        while (result[0] == ' ') {
            result.erase(0, 1);
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a kebab-case string: ";
    cin >> str;
    cout << "Camel Case String: " << camelCase(str) << endl;
    return 0;
}