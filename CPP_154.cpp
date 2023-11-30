bool cycpattern_check(string a, string b) {
    if (a.length() < b.length()) {
        return false;
    }
    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i) + a.substr(0, i) == b) {
            return true;
        }
    }
    return false;
}