vector<string> reverse_delete(string s, string c){
    for(int i = 0; i < c.size(); i++){
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string result = s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    bool is_palindrome = (result == reversed);
    
    return {result, is_palindrome ? "True" : "False"};
}