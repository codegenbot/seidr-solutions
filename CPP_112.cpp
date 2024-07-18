vector<string> reverse_delete(string s, string c) {
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result.push_back(ch);
        }
    }
    string result_str = result;
    string rev = result_str;
    reverse(rev.begin(), rev.end());
    return {result, result == rev ? "True" : "False"};
}