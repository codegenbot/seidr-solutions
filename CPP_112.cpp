vector<string> reverse_delete(string s,string c){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    if(result == reverse_result){
        return {result, "True"};
    }
    else{
        return {result, "False"};
    }
}