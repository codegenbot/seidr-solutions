vector<string> reverse_delete(string s, string c){
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    bool is_palindrome = equal(result.begin(), result.begin() + result.size() / 2, result.rbegin());
    return {result, is_palindrome ? "True" : "False"};
}