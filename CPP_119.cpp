#include <string>
#include <vector>

using namespace std;

string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];
    
    auto isBalanced = [](const string &s) {
        int balance = 0;
        for (char c : s) {
            if (c == '(') balance++;
            else if (c == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    auto canBeCombinedBalanced = [](const string &a, const string &b) {
        int balance = 0;
        for (char c : a) {
            if (c == '(') balance++;
            else if (c == ')') balance--;
            if (balance < 0) return false;
        }
        for (char c : b) {
            if (c == '(') balance++;
            else if (c == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    if (isBalanced(s1) && isBalanced(s2) && (canBeCombinedBalanced(s1, s2) || canBeCombinedBalanced(s2, s1))) {
        return "Yes";
    }
    return "No";
}