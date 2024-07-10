Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result != "") {
                result += (char) toupper(str[i + 1]);
            } else {
                result += str.substr(i + 1, 1);
            }
            while (i + 1 < str.length() && str[i + 1] == '-') {
                i++;
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << toCamelCase(input) << endl;
    return 0;
}