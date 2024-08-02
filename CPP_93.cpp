#include<string>
#include<cctype>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == base + 0 || c == base + 1) ? base + 2 : base;
            c = tolower(c);
            result += c;
        } else {
            result += c;
        }
    }
    return result;
}