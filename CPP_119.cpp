#include <string>
#include <vector>

using namespace std;

bool isBalanced(const string &s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else if (c == ')') balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];

    if (!isBalanced(s1) || !isBalanced(s2)) return "No";

    vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, -1));
    dp[0][0] = 0;

    for (size_t i = 0; i <= s1.size(); ++i) {
        for (size_t j = 0; j <= s2.size(); ++j) {
            if (i > 0 && dp[i-1][j] >= 0) {
                if (s1[i-1] == '(') dp[i][j] = max(dp[i][j], dp[i-1][j] + 1);
                if (s1[i-1] == ')' && dp[i-1][j] > 0) dp[i][j] = max(dp[i][j], dp[i-1][j] - 1);
            }
            if (j > 0 && dp[i][j-1] >= 0) {
                if (s2[j-1] == '(') dp[i][j] = max(dp[i][j], dp[i][j-1] + 1);
                if (s2[j-1] == ')' && dp[i][j-1] > 0) dp[i][j] = max(dp[i][j], dp[i][j-1] - 1);
            }
        }
    }

    return dp[s1.size()][s2.size()] == 0 ? "Yes" : "No";
}