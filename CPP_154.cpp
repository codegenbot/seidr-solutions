int n = a.size();
    int m = b.size();
    if(n != m){
        return false;
    }
    a += a;
    return (a.find(b) != string::npos);
}