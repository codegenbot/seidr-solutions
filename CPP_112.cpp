#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string resultStr = result;
    string revResult = result;
    
    void reverse_delete(string& str) {
        reverse(str.begin(), str.end());
        str.erase(0,1);
    }

    reverse_delete(revResult);
    bool isPalindrome = (resultStr == revResult);
    
    return {result, isPalindrome ? "True" : "False"};
}