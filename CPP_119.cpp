#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst);

int main() {
    // Test input
    vector<string> lst = {"()", "(())", "((()))", "())", "((", ")))"};
    
    // Call the match_parens function and print the result
    cout << match_parens(lst) << endl;
    
    return 0;
}

string match_parens(vector<string> lst){
    int count = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
            if (count < 0) {
                return "No";
            }
        }
    }
    if (count == 0) {
        return "Yes";
    } else {
        return "No";
    }
}