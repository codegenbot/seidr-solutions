#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    string result = "";
    
    for (string str : lst) {
        result += str;
    }
    
    int count = 0;
    for (char c : result) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        
        if (count < 0) {
            return "No";
        }
    }
    
    if (count == 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    vector<string> lst1 = {"()(", ")"};
    vector<string> lst2 = {")", ")"};
    
    cout << match_parens(lst1) << endl; // Output: Yes
    cout << match_parens(lst2) << endl; // Output: No
    
    return 0;
}