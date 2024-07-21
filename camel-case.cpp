#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (result != "") {
                result += toupper(str[i+1]);
                i++;
            }
            else
                result = tolower(str[i+1]) + string(1);
        } 
        else if (str[i] == ' ') {
            result += tolower(str[i+1]);
        } 
        else {
            if (result != "")
                result += toupper(str[i]);
            else
                result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}