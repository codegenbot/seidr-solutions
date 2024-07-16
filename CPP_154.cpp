if(a.size() != b.size()) return false;
    string temp = b + b;
    return (temp.find(a) != string::npos);
}