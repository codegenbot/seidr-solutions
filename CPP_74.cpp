int get_total_chars(vector<string> lst) {
    int total = 0;
    for (string str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = get_total_chars(lst1);
    int total_chars2 = get_total_chars(lst2);
    
    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}