#include <algorithm>
#include <cctype>

using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;
    
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            c = toupper(c);
            result += c;
        } else {
            result += c;
        }
    }
    
    if (!hasLetter)
        reverse(result.begin(), result.end());
    
    return result;
}