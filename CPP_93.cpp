#include<string>
#include<algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base + 3 && c <= base + 26) ? c - 2 : ((c == base + 25) || (c == base + 26)) ? base : c;
        }
        result += tolower(isupper(c));
    }
    return result;
}