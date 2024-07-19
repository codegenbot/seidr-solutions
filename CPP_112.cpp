vector<string> reverse_delete(string s, string c) {
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result.push_back(ch);
        }
    }
    string reverse_str = result;
    reverse(reverse_str.begin(), reverse_str.end());
    return {result, result == reverse_str ? "True" : "False"};
}