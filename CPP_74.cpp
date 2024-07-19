bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}