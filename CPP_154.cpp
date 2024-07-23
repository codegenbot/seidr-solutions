bool cycpattern_check(string a, string b) {
    int len = b.length();
    for(int i = 0; i < len; i++) {
        size_t pos = a.find(b.substr(i)+b.substr(0,i));
        if(pos != string::npos) {
            if(a.substr(pos).find(b) == 0) return true;
        }
    }
    return false;
}