#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 2 || c <= base - 2) ? c : ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? (char)(base + 3) : ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? (char)(base + 1) : tolower(c)));
        }
        result += c;
    }
    return result;
}