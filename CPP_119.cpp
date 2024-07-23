```
#include <iostream>
#include <vector>
using namespace std;

bool match_parens(vector<string> lst) {
    int open = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') open--;
            if (open < 0) return false;
        }
    }
    return open == 0;
}

int main() {
    vector<string> lst = {"(", ")"};
    cout << (match_parens(lst) ? 1 : 0) << endl; 
    return 0;
}