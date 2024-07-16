if (a.size() != b.size()) {
        return false;
    }
    string temp = a + a;
    return temp.find(b) != string::npos;
}