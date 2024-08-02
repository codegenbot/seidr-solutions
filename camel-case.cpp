Here is the solution:

#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            for (int j = i + 1; j <= str.find(' ', i); j++) {
                result += toupper(str[j]);
            }
            result += ' ';
            i = str.find(' ', i);
        } else if (str[i] != ' ') {
            result += tolower(str[i]);
        }
    }
    return result;
}