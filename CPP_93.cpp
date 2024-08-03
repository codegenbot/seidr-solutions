#include <string>
#include <algorithm>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = toupper(c);
            if (c == 'O' || c == 'o') c = base + 2;
            else if (c == 'U' || c == 'u') c = base + 3;
            else if (c == 'E' || c == 'e') c = base + 1;
        }
        result += c;
    }
    return result;
}