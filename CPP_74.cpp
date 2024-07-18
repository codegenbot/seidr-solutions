bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    return totalChars(lst1) < totalChars(lst2) ? lst1 : lst2;
}