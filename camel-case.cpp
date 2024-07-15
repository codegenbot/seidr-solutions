#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] != '-') {
            if(i > 0) {
                result += (char)toupper(str[i]);
            } else {
                result += tolower(str[i]);
            }
        } else {
            i++;
            while(i < str.length() && str[i] == '-') {
                i++;
            }
            if(result.length() > 0) {
                result[0] = tolower(str[i]);
            }
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string in kebab-case: ";
    cin >> str;
    cout << camelCase(str) << endl;
    return 0;
}