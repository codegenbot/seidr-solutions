vector<string> reverse_delete(string s,string c){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    
    if(result == reversed){
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}