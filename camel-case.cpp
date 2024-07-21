#include <iostream>
#include <string>
using namespace std;

string camelCase(string str) {
    string output = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] != '-') {
            if(i == 0 || str[i - 1] == ' ')
                output += toupper(str[i]);
            else
                output += tolower(str[i]);
        } else {
            i++;
        }
        
        while(i < str.length() && str[i] == '-') 
            i++;
    }
    
    return output;
}

int main() {
    string str;
    cout << "Enter the input: ";
    getline(cin, str);
    cout << "Output: " << camelCase(str) << endl;
    return 0;
}