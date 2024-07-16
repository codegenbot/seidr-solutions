if(a.length() != b.length()) return false;
    string doubleA = a + a;
    return doubleA.find(b) != string::npos;
}