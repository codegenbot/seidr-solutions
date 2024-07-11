int n = a.length();
    int m = b.length();
    if(n != m) return false;
    
    string temp = b + b;
    
    if(temp.find(a) != string::npos) return true;
    
    for(int i = 1; i < m; ++i){
        temp = temp.substr(1) + temp[0];
        if(temp.find(a) != string::npos) return true;
    }
    
    return false;
}