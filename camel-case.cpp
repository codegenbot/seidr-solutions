#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    int i;
    for (i = 0; i <= s.size(); i++) {
        if (s[i] == '-') {
            if (result.size() > 0)
                result[result.size()-1] = toupper(result[result.size()-1]);
            result += tolower(s.substr(i+1));
            i++;
        } else if (i == s.size()) {
            char c = toupper(s[i]);
            result += c;
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a kebab-case string: ";
    cin >> input;
    cout << "CamelCase representation: " << kebabToCamel(input) << endl;
    return 0;
}