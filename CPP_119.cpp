#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    int openCount = 0;
    int closeCount = 0;
    
    for (string str : lst) {
        for (char c : str) {
            if (c == '(') {
                openCount++;
            } else {
                if (openCount > 0) {
                    openCount--;
                } else {
                    closeCount++;
                }
            }
        }
    }
    
    return (openCount == 0 && closeCount == 0) ? "Yes" : "No";
}

int main() {
    vector<string> lst1 = {"()(", ")"};
    vector<string> lst2 = {")", ")"};
    
    cout << match_parens(lst1) << endl; // Output: Yes
    cout << match_parens(lst2) << endl; // Output: No
    
    return 0;
}