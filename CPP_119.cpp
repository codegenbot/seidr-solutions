#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst){
    int open = 0, close = 0;
    for (const string& str : lst) {
        for (char ch : str) {
            if (ch == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    return (open == 0 && close == 0) ? "Yes" : "No";
}