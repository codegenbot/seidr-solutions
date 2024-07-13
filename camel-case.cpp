Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string s) {
    string result = "";
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            continue;
        }
        
        if (s[i] == ' ') {
            while (i < s.length() && s[i] == ' ')
                i++;
            result += s.substr(i, 1).toupper();
            i++;
            while (i < s.length() && s[i] != ' ' && s[i] != '-') {
                result += s.substr(i, 1);
                i++;
            }
        } else if (s[i] == '-') {
            i++;
            continue;
        } else {
            result += s.substr(i, 1).toupper();
            i++;
            while (i < s.length() && s[i] != ' ' && s[i] != '-') {
                result += s.substr(i, 1);
                i++;
            }
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    for(int test_case = 0; test_case < t; test_case++) {
        string str;
        cin >> str;
        
        cout << toCamelCase(str) << endl;
    }
    
    return 0;
}