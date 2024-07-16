vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string tmp = result;
    reverse(tmp.begin(), tmp.end());
    return {result, (result == tmp) ? "True" : "False"};
}