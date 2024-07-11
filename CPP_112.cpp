vector<string> reverse_delete(string s, string c){
    string result;
    for(auto ch : s){
        if(c.find_first_of(ch) == string::npos){
            result.push_back(ch);
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}