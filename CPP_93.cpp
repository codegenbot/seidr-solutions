#include<string>
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
            if (newChar == 'a' || newChar == 'e' || newChar == 'i' || newChar == 'o' || newChar == 'u') {
                newChar = 'w' + ((newChar - 'a') % 26);
            }
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}