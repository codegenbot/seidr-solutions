#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    size_t pos = 0;
    
    while (pos < str.size()) {
        if (str.at(pos) == '-') {
            ++pos; // skip the hyphen
            while (pos < str.size() && str.at(pos) == '-') {
                ++pos; // skip all the dashes
            }
            result += toupper(str.at(pos));
            ++pos; // move past the first letter of the new word
        } else if (str.at(pos) == ' ') {
            while (pos < str.size() && str.at(pos) == ' ') {
                ++pos; // skip all the spaces
            }
            result += toupper(str.at(pos));
            ++pos; // move past the first letter of the new word
        } else if (str.at(pos) >= 'a' && str.at(pos) <= 'z') {
            if (!result.empty()) {
                result += tolower(str.at(pos));
            } else {
                result += toupper(str.at(pos));
            }
        } else {
            ++pos; // move past the current character
        }
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    cout << toCamelCase(str) << endl;
    return 0;
}