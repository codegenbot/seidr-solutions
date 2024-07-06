```
using namespace std;

string match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else close++;
        }
    }
    return to_string(open == close) ? "Yes" : "No";
}