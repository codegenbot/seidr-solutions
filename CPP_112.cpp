vector<string> reverse_delete(string s,string c){
    // Deleting characters in s that are equal to any character in c
    for(int i=0; i<c.length(); i++){
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    
    // Checking if the result string is palindrome
    bool isPalindrome = true;
    int n = s.length();
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    
    // Returning the result string and "True"/"False" for the check
    vector<string> result;
    result.push_back(s);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}