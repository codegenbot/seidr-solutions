if (a.size() != b.size()) return false;
    string doubleStr = a + a;
    return doubleStr.find(b) != string::npos;
}