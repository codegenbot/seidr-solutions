#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst){
    string a = lst[0];
    string b = lst[1];
    
    // Function to check if the parenthesis string is balanced
    auto isBalanced = [](string s) {
        int balance = 0;
        for (char ch : s) {
            if (ch == '(') balance++;
            else if (ch == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };
    
    if (isBalanced(a + b) || isBalanced(b + a)) {
        return "Yes";
    } else {
        return "No";
    }
}