#include <string>

bool issame(vector<string> a, vector<string> b) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string resultStr = result;
    string revResult = result;
    reverse(revResult.begin(), revResult.end());
    bool isPalindrome = (resultStr == revResult);
    return {result, isPalindrome ? "True" : "False"};
}