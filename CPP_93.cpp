#include <cctype>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newC = c;
            if (islower(newC))
                newC = static_cast<char>(newC + ('Z' - 'a'));
            else
                newC = static_cast<char>(newC - ('A' - 'a'));
            switch (c) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    result += static_cast<char>(static_cast<int>('a') + 2);
                    break;
                default:
                    result += newC;
            }
        } else {
            result += c;
        }
    }
    return result;
}