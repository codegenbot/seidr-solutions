if (a.length() != b.length()) return false;
    string tmp = b + b;
    return tmp.find(a) != string::npos;
}