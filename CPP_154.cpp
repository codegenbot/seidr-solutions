if(a.size() != b.size()) return false;

    string doubleA = a + a;
    return doubleA.find(b) != string::npos;
}