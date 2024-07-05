#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst){
    string a = lst[0];
    string b = lst[1];
    
    auto isBalancedConcat = [](string a, string b) {
        int balance = 0;
        for (char ch : (a + b)) {
            if (ch == '(') balance++;
            else if (ch == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };
    
    if (isBalancedConcat(a, b) || isBalancedConcat(b, a)) {
        return "Yes";
    } else {
        return "No";
    }
}