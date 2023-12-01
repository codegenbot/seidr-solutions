#include <string>
using namespace std;

string solve(string s) {
    string result = "";
  
    bool containsLetters = false;
    for (char c : s) {
        if (isalpha(c)) {
            containsLetters = true;
            if (islower(c)) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        } else {
            result += c;
        }
    }
  
    if (!containsLetters) {
        reverse(result.begin(), result.end());
    }
  
    return result;
}