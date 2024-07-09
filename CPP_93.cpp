#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newChar;
            if (isupper(c)) {
                newChar = 'a' + (c - 'A');
            } else {
                newChar = 'A' + (c - 'a');
            }
            result += newChar;
            switch (newChar) {
                case 'a':
                    newChar = 'c';
                    break;
                case 'c':
                    newChar = 'e';
                    break;
                case 'e':
                    newChar = 'g';
                    break;
                case 'g':
                    newChar = 'i';
                    break;
                case 'i':
                    newChar = 'k';
                    break;
                case 'k':
                    newChar = 'm';
                    break;
                case 'm':
                    newChar = 'o';
                    break;
                case 'o':
                    newChar = 'q';
                    break;
                case 'q':
                    newChar = 's';
                    break;
                case 's':
                    newChar = 'u';
                    break;
                case 'u':
                    newChar = 'w';
                    break;
                case 'w':
                    newChar = 'y';
                    break;
                case 'y':
                    newChar = ' ';
                    break;
            }
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}