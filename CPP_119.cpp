#include <string>
#include <vector>

using namespace std;

string match_parens(vector<string> lst) {
    int open = 0;
    for (string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    return "No";
                }
            }
        }
    }

    return (open == 0) ? "Yes" : "No";
}