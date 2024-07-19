vector<string> reverse_delete(string s, string c){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    
    return {result, result == result_reverse ? "True" : "False"};
}