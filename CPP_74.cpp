
bool issame(const vector<string>& a, const vector<string>& b) {
    return total_chars(a) == total_chars(b);
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    return total_chars(lst1) <= total_chars(lst2) ? lst1 : lst2;
}