bool cycpattern_check(string a, string b) {
    if (a.find(b) != string::npos) {
        return true;
    }
    for (int i = 0; i < b.length(); i++) {
        string rotation = b.substr(i) + b.substr(0, i);
        if (a.find(rotation) != string::npos) {
            return true;
        }
    }
    return false;
}