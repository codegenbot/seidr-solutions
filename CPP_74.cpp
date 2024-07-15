bool issame(const vector<string>& a, const vector<string>& b) {
    return (a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    return total_chars(lst1) < total_chars(lst2) ? lst1 : total_chars(lst1) == total_chars(lst2) ? lst1 : lst2;
}