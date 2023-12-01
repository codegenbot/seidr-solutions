bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    // Check if b is a substring of a
    if (a.find(b) != string::npos) {
        return true;
    }

    // Check if any rotation of b is a substring of a
    for (int i = 0; i < m; i++) {
        string rotated = b.substr(i) + b.substr(0, i);
        if (a.find(rotated) != string::npos) {
            return true;
        }
    }

    return false;
}