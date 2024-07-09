Here is the completed code:

#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    int count = 0;
    
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '-') {
            result += char(toupper(s[++i]));
            count++;
        } else if(count > 0) {
            result += s[i];
            count--;
        } else {
            result += s[i];
        }
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << camelCase(input) << endl;
    return 0;
}