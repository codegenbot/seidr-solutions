#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            continue;
        }
        
        if (i > 0 && str[i-1] == ' ') {
            result[0] -= 32;
            i++;
            continue;
        } else if (i > 0) {
            result[result.length()-1] -= 32;
        }
        
        while (i < str.length() && str[i] != ' ') {
            result += str[i];
            i++;
        }
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << toCamelCase(input) << endl;
    return 0;
}