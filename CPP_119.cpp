#include <string>

using namespace std;

string match_parens(vector<string> lst) {
    int open = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') open--;
            if (open < 0) return "No";
        }
    }
    return to_string(open == 0);
}