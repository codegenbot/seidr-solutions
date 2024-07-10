if (a.length() != b.length()) {
        return false;
    }

    string temp = a + a;
    return temp.find(b) != string::npos;
}