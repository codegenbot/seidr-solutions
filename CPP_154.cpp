bool cycpattern_check(string a, string b) {
    if (a.find(b) != string::npos) {
        return true;
    }
    for (int i = 0; i < b.length() - 1; i++) {
        rotate(b.begin(), b.begin() + 1, b.end());
        if (a.find(b) != string::npos) {
            return true;
        }
    }
    return false;
}