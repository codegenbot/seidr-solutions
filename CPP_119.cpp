#include <string>
using namespace std;

int match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close ? 1 : 0; 
}