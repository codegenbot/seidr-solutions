vector<string> reverse_delete(string s, string c){
    for(auto it = s.begin(); it != s.end();){
        if(c.find(*it) != string::npos){
            it = s.erase(it);
        } else{
            ++it;
        }
    }
    string result = s;
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    if(result == reverse_s){
        return {result, "True"};
    } else{
        return {result, "False"};
    }
}