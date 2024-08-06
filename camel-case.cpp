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
        
        if (result != "") {
            result[0] = toupper(result[0]);
        } else {
            result += tolower(str[i]);
        }
        
        while (i < str.length() && str[i] != ' ') {
            result += str[i];
            i++;
        }
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << toCamelCase(s) << endl;
    return 0;
}