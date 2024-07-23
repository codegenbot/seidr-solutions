#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    cin >> s; 

    string result = "";
    bool capitalizeNext = true;

    for (char c : s) { 
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(' ');
                    capitalizeNext = false;
                }
            } else {
                capitalizeNext = true;
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    if (result.size() > 0 && !capitalizeNext) {
        result[0] = tolower(result[0]);
    }

    cout << "camelCase: " << result; 

    return 0;
}