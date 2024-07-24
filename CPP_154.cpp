bool cycpattern_check(string a, string b) {
    return (a + a).find(b) != string::npos;
}