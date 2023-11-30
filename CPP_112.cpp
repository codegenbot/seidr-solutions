vector<string> reverse_delete(string s, string c) {
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string result = s;
    reverse(result.begin(), result.end());
    bool isPalindrome = (result == s);
    return {result, (isPalindrome ? "True" : "False")};
}