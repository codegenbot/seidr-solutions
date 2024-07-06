#include<string>
#include<cctype>

using namespace std;

string encode(string message) {
    string result = "";
    
    for (char c : message) {
        if (isalpha(c)) {
            char newC = isupper(c) ? (c >= 'A' && c <= 'Z') ? c + 3 : c - 25 : (c >= 'a' && c <= 'z') ? c + 3 : c - 97;
            result += tolower(isupper(newC)) ? toupper(newC) : tolower(newC);
        } else {
            result += c;
        }
    }
    
    return result;
}