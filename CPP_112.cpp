vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string new_s = "";
    for(char ch : s) {
        if(c.find(ch) == string::npos) {
            new_s += ch;
        }
    }
    string reversed_new_s = new_s;
    reverse(reversed_new_s.begin(), reversed_new_s.end());
    result.push_back(new_s);
    result.push_back(new_s == reversed_new_s ? "True" : "False");
    return result;
}