bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (n < m) {
        return false;
    }

    string temp = b + b;

    if (temp.find(a) != string::npos) {
        return true;
    }

    for (int i = 1; i < m; i++) {
        string rotated = b.substr(i, m - i) + b.substr(0, i);
        string combined = rotated + rotated;

        if (combined.find(a) != string::npos) {
            return true;
        }
    }

    return false;
}