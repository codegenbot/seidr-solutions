#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str[i] != '-') {
            if (!result.empty())
                result[0] -= 32; // convert first letter to uppercase in the result
            else
                result += str[i];
        } else if (!result.empty() || str[i+1] == ' ') {
            i++;
            continue;
        }
        
        while (i < str.length() && str[i] != '-') {
            i++;
        }
        i++; // skip '-'
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        cout << toCamelCase(str) << endl;
    }

    return 0;
}