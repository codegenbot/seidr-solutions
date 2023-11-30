#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string kebabCase) {
    string camelCase = "";
    bool capitalizeNext = false;

    for (int i = 0; i < kebabCase.length(); i++) {
        if (kebabCase[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += toupper(kebabCase[i]);
            capitalizeNext = false;
        } else {
            camelCase += kebabCase[i];
        }
    }

    return camelCase;
}

int main() {
    string kebabCase;
    getline(cin, kebabCase);

    string camelCase = kebabToCamel(kebabCase);
    cout << camelCase << endl;

    return 0;
}