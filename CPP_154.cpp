bool cycpattern_check(string a, string b){
    if(a.length() < b.length()){
        return false;
    }
    
    string temp = b + b;
    
    if(temp.find(a) != string::npos){
        return true;
    }
    
    return false;
}