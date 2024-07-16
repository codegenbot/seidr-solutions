bool issame(const vector<string>& a, const vector<string>& b);

int total_chars(const vector<string>& lst);

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return total_chars(lst1) == total_chars(lst2) ? lst1 : lst2;
}