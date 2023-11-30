vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result, (isPalindrome ? "True" : "False")};
}