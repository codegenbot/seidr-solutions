vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string res_str = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            res_str += s[i];
        }
    }
    
    string rev_str = res_str;
    reverse(rev_str.begin(), rev_str.end());
    
    result.push_back(res_str);
    result.push_back(res_str == rev_str ? "True" : "False");
    
    return result;
}