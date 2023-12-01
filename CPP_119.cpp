#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    int count = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else if (c == ')') {
                if (count == 0) {
                    return "No";
                }
                count--;
            }
        }
    }
    
    return (count == 0) ? "Yes" : "No";
}

int main() {
    vector<string> lst = {"()(", ")"};
    cout << match_parens(lst) << endl;
    
    lst = {")", ")"};
    cout << match_parens(lst) << endl;
    
    return 0;
}