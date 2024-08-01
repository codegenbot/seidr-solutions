#include <string>
using namespace std;

string kebabToCamel(const string& str) {
    string result;
    bool capitalizeNext = true;
    
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> str;
        cout << "CamelCase equivalent: " << kebabToCamel(str) << endl;
    }
    return 0;
}