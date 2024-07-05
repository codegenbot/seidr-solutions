#include <iostream>
#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst) {
    auto is_good = [](const string& s) {
        int balance = 0;
        for (char c : s) {
            if (c == '(') balance++;
            else balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };
    
    string s1 = lst[0] + lst[1];
    string s2 = lst[1] + lst[0];
    
    if (is_good(s1) || is_good(s2)) return "Yes";
    return "No";
}

int main() {
    cout << (match_parens({")", "("}) == "Yes" ? "Pass" : "Fail") << endl;
    return 0;
}