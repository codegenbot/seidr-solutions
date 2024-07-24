#include<string>
#include<cctype>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newC = (c >= 'a' && c <= 'z') ? 'a' + (c - 'a' + 2) % 26 : 'A' + (c - 'A' + 2) % 26;
            result += tolower(newC);
        } else {
            result += c;
        }
    }
    return result;
}