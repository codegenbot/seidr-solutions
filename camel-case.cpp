Here is the solution:

#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip "-"
            if (i < s.size() && s[i] != ' ')
                result += s[i]. toupper();
        } else if (s[i] == ' ') {
            if (!result.empty()) 
                result += s[i+1]. toupper();
        } else {
            if (result.empty())
                result += s[i];
            else
                result += s[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string in kebab-case: ";
    cin >> str;
    cout << "The camelCase form of the input is: " << camelCase(str) << endl;
    return 0;
}