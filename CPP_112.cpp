vector<string> reverse_delete(string s, string c){
    string result;
    for(auto ch : s){
        if(c.find(ch)==string::npos){
            result += ch;
        }
    }
    string reverse = result;
    reverse(result.begin(),result.end());
    return {result, (result==reverse)?"True":"False"};
}