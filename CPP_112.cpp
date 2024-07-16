vector<string> reverse_delete(string s, string c){
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string result = s;
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return {result, result == rev_s ? "True" : "False"};
}