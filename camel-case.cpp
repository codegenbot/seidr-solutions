#include <string>
using namespace std;

string kebabToCamel(const string& str) {
    string result;
    int i = 0;
    
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] != ' ') {
                i++;
            }
            result += toupper(str[i]);
            i++;
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result += tolower(str[i]);
            } else {
                result += toupper(str[i]);
            }
            i++;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string in kebab-case: ";
    cin >> str;
    cout << "CamelCase conversion: " << kebabToCamel(str) << endl;
    return 0;
}