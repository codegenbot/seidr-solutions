#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a kebab-case string: ";
    cin >> s;
    cout << "The camelCase is: " << camelCase(s) << endl;
    return 0;
}