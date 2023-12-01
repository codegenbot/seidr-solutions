bool cycpattern_check(string a, string b){
    // Check if b is a substring of a
    if(a.find(b) != string::npos){
        return true;
    }
    
    // Check if any rotation of b is a substring of a
    int len = b.length();
    for(int i=0; i<len-1; i++){
        b = b.substr(1) + b[0];
        if(a.find(b) != string::npos){
            return true;
        }
    }
    
    return false;
}