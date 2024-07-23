vector<string> reverse_delete(string s, string c) {
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    
    string result = s;
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    
    return {result, result == reversed ? "True" : "False"};
}