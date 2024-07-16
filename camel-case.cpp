#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    bool capitalize = true;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '-') {
            capitalize = true;
        } else if(capitalize) {
            result += toupper(s[i]);
            capitalize = false;
        } else {
            result += tolower(s[i]);
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    return 0;
}