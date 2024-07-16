if(s.length() < 3)
        return false;
    
    for(int i=0; i+2<s.length(); i++){
        if(s[i]==s[i+1] || s[i]==s[i+2] || s[i+1]==s[i+2])
            return false;
    }
    
    return true;
}