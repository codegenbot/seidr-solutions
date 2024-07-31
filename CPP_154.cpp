if (a.length() != b.length()) return false;
    string tmp = a + a;
    return (tmp.find(b) != string::npos);
}