vector<string> reverse_delete(string s, string c){
    vector<string> result;
    
    // Deleting characters from s that are equal to any character in c
    for(int i=0; i<c.length(); i++){
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    
    // Checking if the result string is palindrome
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);
    
    // Storing the result string and "True"/"False" for the check
    result.push_back(s);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}