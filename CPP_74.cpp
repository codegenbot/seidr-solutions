int total_chars(vector<string> lst) {
    int sum = 0;
    for (string s : lst) {
        sum += s.size();
    }
    return sum;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return total_chars(lst1) == total_chars(lst2) ? lst1 : lst2;
    }
}