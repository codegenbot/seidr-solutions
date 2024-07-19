#include <string>
#include <vector>

pair<string, string> solveProblem(const string& s, const string& c) {
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