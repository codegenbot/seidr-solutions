if(a.length() != b.length()) return false;
    string doubleStr = a + a;
    return doubleStr.find(b) != string::npos;
}