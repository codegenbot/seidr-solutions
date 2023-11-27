#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    string result = "Yes";
    int count = 0;
    for (string str : lst) {
        for (char c : str) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
            if (count < 0) {
                result = "No";
                break;
            }
        }
    }
    if (count != 0) {
        result = "No";
    }
    return result;
}

int main() {
    vector<string> lst = {"()(", ")"};
    cout << match_parens(lst) << endl;
    
    lst = {")", ")"};
    cout << match_parens(lst) << endl;
    
    return 0;
}