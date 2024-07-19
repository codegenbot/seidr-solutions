vector<string> reverse_delete(string s, string c) {
        string res = "";
        for (char ch : s) {
            if (c.find(ch) == string::npos) {
                res += ch;
            }
        }
        string rev_res = res;
        reverse(rev_res.begin(), rev_res.end());
        return {res, res == rev_res ? "True" : "False"};
    }