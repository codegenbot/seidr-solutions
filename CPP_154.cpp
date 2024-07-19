if(a.length() != b.length()) return false;
    string concat = a + a;
    return concat.find(b) != string::npos;
}