int get_total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (get_total_chars(lst1) < get_total_chars(lst2)) {
        return lst1;
    } else {
        return get_total_chars(lst1) == get_total_chars(lst2) ? lst1 : lst2;
    }
}