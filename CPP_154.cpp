bool cycpattern_check(string a, string b) {
    if (a.length() < b.length()) {
        return false;
    }

    string temp = b + b;
    return temp.find(a) != string::npos;
}