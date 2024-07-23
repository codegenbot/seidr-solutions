bool cycpattern_check(string a, string b) {
    int len = b.length();
    for(int i = 0; i < len; i++) {
        string substr = b.substr(i) + b.substr(0, i);
        if(a.find(substr) != string::npos) return true;
    }
    return false;