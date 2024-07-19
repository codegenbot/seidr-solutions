int n = a.size();
    int m = b.size();
    if(n != m) return false;
    
    string temp = a + a;
    
    if(temp.find(b) != string::npos) return true;
    
    for(int i = 0; i < n; i++){
        temp = temp.substr(1) + temp[0];
        if(temp.find(b) != string::npos) return true;
    }
    
    return false;
}