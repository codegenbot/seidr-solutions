#include <iostream>
#include <vector>
using namespace std;

string match_parens(vector<string> lst) {
    int countOpen = 0, countClose = 0;
    
    for (auto str : lst) {
        for (char c : str) {
            if (c == '(')
                countOpen++;
            else
                countClose++;
        }
    }
    
    if (countOpen == countClose)
        return "Yes";
    else
        return "No";
}

int main() {
    vector<string> lst = {")", "("};
    assert(match_parens({")", "("}) == "Yes" );
    cout << match_parens({"((()))", "())("}) << endl;
    return 0;
}