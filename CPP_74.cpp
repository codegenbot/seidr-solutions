int count_total_chars(const vector<string> &lst) {
    int count = 0;
    for (const string &str : lst) {
        count += str.length();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (count_total_chars(lst1) < count_total_chars(lst2)) {
        return lst1;
    }
    return (count_total_chars(lst1) == count_total_chars(lst2)) ? lst1 : lst2;
}