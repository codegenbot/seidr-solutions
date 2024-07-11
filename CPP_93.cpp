#include<string>
#include<cctype>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'A' && c <= 'E') {
                c = ('G' + ((c - 'A') % 3));
            } else if (c >= 'I' && c <= 'O') {
                c = ('K' + ((c - 'I') % 3));
            } else if (c >= 'U' && c <= 'U') {
                c = ('W' + ((c - 'U') % 3));
            }
        }
        result += tolower(c);
    }
    return result;
}