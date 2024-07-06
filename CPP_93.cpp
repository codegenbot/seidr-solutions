#include<string>
#include<cctype>

using namespace std;

string encode(string message) {
    string result = "";
    
    for (char c : message) {
        if (isalpha(c)) {
            char newC = (c >= 'a' && c <= 'z') ? c + 3 : (c >= 'A' && c <= 'Z') ? c - 19 : c;
            result += tolower(isupper(newC)) ? toupper(newC) : tolower(newC);
        } else {
            result += c;
        }
    }
    
    return result;
}