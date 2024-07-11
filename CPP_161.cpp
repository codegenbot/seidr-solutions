#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

string solve(const string& s) {
    string result = s;
    
    transform(result.begin(), result.end(), result.begin(), [](char c) {
        if (isalpha(c)) {
            return islower(c) ? toupper(c) : tolower(c);
        }
        return c;
    });

    if (count_if(result.begin(), result.end(), isalpha) == 0) {
        reverse(result.begin(), result.end());
    }
    
    return result;
}