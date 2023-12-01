bool cycpattern_check(string a, string b){
    int n = a.length();
    int m = b.length();

    if(m > n)
        return false;

    string temp = b + b;
    
    for(int i = 0; i < n; i++){
        string rotation = temp.substr(i, m);
        if(rotation == a)
            return true;
    }

    return false;
}