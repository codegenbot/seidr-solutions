#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == '-') {
            i++;
            while(i < str.length() && str[i] != ' ') i++;
            result += toupper(str[i]);
            i++;
        } else if(str[i] == ' ') {
            i++;
            while(i < str.length() && str[i] == ' ') i++;
        } else {
            if(result.length() > 0) result += tolower(str[i]);
            else result += toupper(str[i]);
            i++;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a kebab-case string: ";
    cin >> str;
    cout << "CamelCase: " << camelCase(str) << endl;
    return 0;
}