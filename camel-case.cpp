#include <string>
using namespace std;

string kebabToCamel(string str) {
    string result;
    int i = 0;

    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            result += toupper(str[i]);
        } else if (str[i] == ' ') {
            result += " ";
        } else {
            result += tolower(str[i]);
        }
        i++;
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a kebab-case string: ";
    cin >> str;
    cout << "CamelCase equivalent: " << kebabToCamel(str) << endl;

    return 0;
}