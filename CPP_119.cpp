#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    string s = lst[0] + lst[1];
    int count = 0;
    for (char c : s) {
        if (c == '(')
            count++;
        else if (c == ')') {
            if (count == 0)
                return "No";
            count--;
        }
    }
    return count == 0 ? "Yes" : "No";
}

int main() {
    vector<string> lst = {"()(", ")"};
    cout << match_parens(lst) << endl;
    
    lst = {")", ")"};
    cout << match_parens(lst) << endl;
    
    return 0;
}