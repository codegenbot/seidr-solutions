Here is the completed code:

#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(s[i]);
            capitalizeNext = false;
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    cout << "input: ";
    cin >> input;
    cout << "output: " << camelCase(input) << endl;
    return 0;
}