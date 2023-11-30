vector<string> reverse_delete(string s, string c){
    for(int i=0;i<c.length();i++){
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    if(s == rev_s){
        return {s, "True"};
    }
    return {s, "False"};
}