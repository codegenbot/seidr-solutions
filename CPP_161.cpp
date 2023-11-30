#include <string>
using namespace std;

string solve(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    int start = 0;
    int end = s.size() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    
    return s;
}