bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    // Check if b is substring of a
    if (a.find(b) != string::npos) {
        return true;
    }

    // Check if b is a rotation of a
    for (int i = 1; i < n; i++) {
        string rotation = a.substr(i) + a.substr(0, i);
        if (rotation == b) {
            return true;
        }
    }

    return false;
}