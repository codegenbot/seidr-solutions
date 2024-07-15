bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

void total_match(vector<string> lst1, vector<string> lst2) {
    assert(total_chars(lst1) == total_chars(lst2) || total_chars(lst1) < total_chars(lst2));
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}