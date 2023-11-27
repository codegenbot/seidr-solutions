string solve(string s){
    string result = "";
    int n = s.length();
    
    // Check if string contains any letters
    bool containsLetters = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            containsLetters = true;
            break;
        }
    }
    
    // Reverse case of letters or keep non-letter characters as it is
    if(containsLetters){
        for(int i=0; i<n; i++){
            if(islower(s[i])){
                result += toupper(s[i]);
            }
            else if(isupper(s[i])){
                result += tolower(s[i]);
            }
            else{
                result += s[i];
            }
        }
    }
    else{
        // Reverse the string
        for(int i=n-1; i>=0; i--){
            result += s[i];
        }
    }
    
    return result;
}