vector<string> reverse_delete(string s,string c){
    vector<string> result;
    string newString = "";
    
    // Delete characters in s that are equal to any character in c
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            newString += s[i];
        }
    }
    
    // Check if the result string is palindrome
    string reversedString = newString;
    reverse(reversedString.begin(), reversedString.end());
    bool isPalindrome = (newString == reversedString);
    
    // Add the result string and "True"/"False" to the result vector
    result.push_back(newString);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}