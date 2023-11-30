vector<string> reverse_delete(string s, string c){
    vector<string> result;
    string res = "";

    for(int i = 0; i < s.length(); i++){
        if(c.find(s[i]) == string::npos){
            res += s[i];
        }
    }

    string rev = res;
    reverse(rev.begin(), rev.end());

    if(res == rev){
        result.push_back(res);
        result.push_back("True");
    }
    else{
        result.push_back(res);
        result.push_back("False");
    }

    return result;
}