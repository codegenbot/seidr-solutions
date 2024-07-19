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
                    c = 'a'; break;
                case 2:
                case 3:
                case 4:
                case 5:
                    c = 'e'; break;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                    c = 'i'; break;
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                    c = 'o'; break;
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                    c = 'u'; break;
            }
        }
        result += c;
    }
    return result;
}