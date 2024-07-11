#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst){
    int openCount = 0, closeCount = 0;
    for (const string& str : lst) {
        openCount = 0;
        closeCount = 0;
        for (char c : str) {
            if (c == '(') {
                openCount++;
            } else {
                if (openCount > 0) {
                    openCount--;
                } else {
                    closeCount++;
                }
            }
        }
    }
    return (openCount == 0 && closeCount <= 1) ? "Yes" : "No";
}