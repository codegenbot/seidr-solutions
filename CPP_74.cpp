bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    for (const string& s : lst1) {
        sum += s.length();
    }
    for (const string& s : lst2) {
        sum += s.length();
    }

    if (!issame(lst1, lst2)) {
        return issame({lst1}, {lst2}, {}) ? lst1 : lst2;
    } else {
        return lst1;
    }
}