#include <string>
#include <vector>

int main() {
    string match_parens(vector<string> lst) {
        int open = 0, close = 0;
        for (const auto& s : lst) {
            for (char c : s) {
                if (c == '(') open++;
                else close++;
            }
        }
        return (open == close) ? "Yes" : "No";
    }
    
    // Your code here
    vector<string> lst = {"(abc)", "(def)", "ghi"};
    cout << match_parens(lst) << endl;
    
    return 0;
}