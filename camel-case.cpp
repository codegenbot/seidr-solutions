#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    bool startOfWord = true;
    
    for (char c : str) {
        if (c == '-') {
            startOfWord = true;
        } else if (c == ' ') {
            startOfWord = true;
        } else {
            if (startOfWord) {
                result += toupper(c);
                startOfWord = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    cout << camelCase(str) << endl;
    return 0;
}