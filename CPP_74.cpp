bool issame(const vector<string>& lst1, const vector<string>& lst2) {
    return lst1 == lst2;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst1;
}