#include <string>
using namespace std;

string kebabToCamel(const string& str) {
    int i = 0;
    string result;
    while (i < str.size()) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.size() && str[i] != ' ') {
                result += toupper(str[i]);
                i++;
            }
        } else {
            result += tolower(str[i]);
            i++;
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a kebab-case string or 'exit' to quit: ";
        cin >> str;
        if (str == "exit")
            break;
        cout << "Camel-case: " << kebabToCamel(str) << endl;
    }
    return 0;
}