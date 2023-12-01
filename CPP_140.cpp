#include <string>
using namespace std;

string fix_spaces(string text) {
    int consecutiveSpaces = 0;
    int n = text.length();
    string result = "";

    for (int i = 0; i < n; i++) {
        if (text[i] == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
            consecutiveSpaces = 0;
        }
    }
    return result;
}