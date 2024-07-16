if(a.length() != b.length())
        return false;

    string s = a + a;
    return s.find(b) != string::npos;
}