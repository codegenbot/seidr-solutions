#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] != ' ') {
                result += toupper(str[i]);
                i++;
            }
        } else if (str[i] == ' ') {
            i++;
            continue;
        } else {
            result += tolower(str[i]);
            i++;
        }
    }
    
    return result + (result.length() > 0 ? "" : "");
}

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <initializer_list>
#endif

int main() {
    string str;
    while (cin >> str) {
        cout << camelCase(str) << endl;
    }
    return 0;
}