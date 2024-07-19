#include <algorithm>
#include <cctype>

using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;
    
    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
            hasLetter = false;
        } else {
            if (hasLetter) {
                if (islower(c))
                    result += toupper(c);
                else
                    result += tolower(c);
            } else {
                result += c;
                hasLetter = true;
            }
        }
    }
    
    if (!hasLetter)
        reverse(result.begin(), result.end());
    
    return result;
}