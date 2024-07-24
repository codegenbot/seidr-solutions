string result = s;
    int n = s.size();
    bool hasLetter = false;
    
    for(int i = 0; i < n; i++) {
        if(isalpha(s[i])) {
            result[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            hasLetter = true;
        }
    }
    
    if(!hasLetter) {
        reverse(result.begin(), result.end());
    }
    
    return result;
}