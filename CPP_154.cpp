int cyclic_check(string a, string b) {
    if (a.length() != b.length()) return false;
    a += a;
    return a.find(b) != string::npos;
}