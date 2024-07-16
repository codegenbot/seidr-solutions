if (a.size() != b.size()) return false;
    string concat = a + a;
    return concat.find(b) != string::npos;
}