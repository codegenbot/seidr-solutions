vector<string> reverse_delete(string s, string c){
    for(int i = 0; i < c.size(); ++i){
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string result = s;
    string reverse_result = s;
    reverse(reverse_result.begin(), reverse_result.end());
    bool is_palindrome = (result == reverse_result);
    return {result, is_palindrome ? "True" : "False"};
}