#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch (c - base) {
                case 0:
                case 1:
                    c = base;
                    break;
                case 2:
                    c = (isupper(c)) ? 'C' : 'c';
                    break;
                case 3:
                    c = (isupper(c)) ? 'D' : 'd';
                    break;
                case 4:
                    c = (isupper(c)) ? 'E' : 'e';
                    break;
                case 5:
                    c = (isupper(c)) ? 'F' : 'f';
                    c += (c == 'a') ? 2 : 1;
                    break;
                case 6:
                    c = (isupper(c)) ? 'G' : 'g';
                    break;
                case 7:
                    c = (isupper(c)) ? 'H' : 'h';
                    break;
                case 8:
                    c = (isupper(c)) ? 'I' : 'i';
                    break;
                case 9:
                    c = (isupper(c)) ? 'J' : 'j';
                    break;
                default:
                    if ((c - base) % 13 == 0) {
                        c = base;
                    } else {
                        c += (c - base) % 13 + 1;
                    }
            }
        }
        result += c;
    }
    return result;
}