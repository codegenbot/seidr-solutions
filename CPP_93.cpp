#include <string>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isalpha(toupper(c)) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch ((c - (isalpha(toupper(c)) ? 'A' : 'a')) % 26) {
                case 0:
                case 1:
                case 3:
                case 5:
                    c = (isalpha(toupper(c)) ? 'A' : 'a') + 2;
                    break;
                default:
                    c = (isalpha(toupper(c)) ? 'A' : 'a') + ((c - (isalpha(toupper(c)) ? 'A' : 'a')) % 26) + 2;
                    break;
            }
        }
        result += c;
    }
    return result;
}