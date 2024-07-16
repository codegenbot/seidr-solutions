int count_chars(vector<string> lst) {
    int total_chars = 0;
    for (string str : lst) {
        total_chars += str.length();
    }
    return total_chars;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (count_chars(lst1) < count_chars(lst2)) {
        return lst1;
    }
    return (lst1 == lst2) ? lst1 : lst2;
}