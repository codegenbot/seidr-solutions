bool cycpattern_check(string a, string b) {
    for(int k = 0; k < b.length(); k++) {
        string rotated = b.substr(k) + b.substr(0, k);
        if(a.find(rotated) != string::npos) {
            return true;
        }
    }
    return false;
}