bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        for (int j = 0; j <= a.length() - b.length(); j++) {
            if (a.substr(j).compare(a.substr(i) + a.substr(0, i)) == 0)
                return true;
        }
    }
    return false;
}