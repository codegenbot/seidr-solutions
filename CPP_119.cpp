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
    vector<string> lst({string(" "), string("("), string(")")});
    if(match_parens(lst)) cout << "Yes" << endl; else cout << "No" << endl; 
    //assert (match_parens({")", "("}) == true );
    return 0;
}