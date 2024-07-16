vector<string> result;
    string new_s;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            new_s.push_back(ch);
        }
    }
    string rev_new_s = new_s;
    reverse(rev_new_s.begin(), rev_new_s.end());
    result.push_back(new_s);
    result.push_back(new_s == rev_new_s ? "True" : "False");
    return result;
}