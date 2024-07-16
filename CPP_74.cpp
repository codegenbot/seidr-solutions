int total_chars(vector<string> vec) {
    int count = 0;
    for (string str : vec) {
        count += str.length();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}