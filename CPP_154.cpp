bool cycpattern_check(string a,string b) {
    if (a.find(b) != string::npos) {
        return true;
    }
    for (int i = 1; i < b.length(); i++) {
        string rotated = b.substr(i) + b.substr(0, i);
        if (a.find(rotated) != string::npos) {
            return true;
        }
    }
    return false;
}