#include <algorithm>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'z' || c == 'Z') {
                c = isupper(c) ? 'a' : 'A';
            } else {
                c = isupper(c) ? 'z' : 'Z';
            }
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}