vector<string> reverse_delete(string s,string c){
    vector<string> result;
    string new_s = "";
    for(int i=0;i<s.length();i++){
        if(c.find(s[i]) == string::npos){
            new_s += s[i];
        }
    }
    result.push_back(new_s);
    string rev_s = new_s;
    reverse(rev_s.begin(), rev_s.end());
    if(new_s == rev_s){
        result.push_back("True");
    }else{
        result.push_back("False");
    }
    return result;
}