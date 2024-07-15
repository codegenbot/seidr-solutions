bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

void assert(bool expression) {
    if (!expression) {
        throw "Assertion failed";
    }
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    assert(issame(lst1, lst2));
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return total_chars(lst1) == total_chars(lst2) ? lst1 : lst2;
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}