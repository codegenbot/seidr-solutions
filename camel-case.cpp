#include <string>
using namespace std;

string camelCase(string s) {
    string result;
    int flag = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '-') {
            flag = 1;
            continue;
        }
        
        if(flag) {
            result += toupper(s[i]);
            flag = 0;
        } else {
            result += tolower(s[i]);
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "The camelCase is: " << camelCase(input) << endl;
    return 0;
}