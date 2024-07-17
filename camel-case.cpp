Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str[i] != '-') {
            result += toupper(str[i]);
        } else {
            i++;
            while (i < str.length() && str[i] == '-') {
                i++;
            }
            if (i < str.length()) {
                if (!result.empty())
                    result += ' ';
                for (; i < str.length() && str[i] != '-'; i++) {
                    result += tolower(str[i]);
                }
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